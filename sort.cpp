#include <iostream>
#include <string>

using namespace std;

class Bubble
{
	char cap_max;
	string cap_ans;
	char temp;
	
public:
	Bubble()
	: cap_max('\0'), cap_ans("") {}
	~Bubble(){}

	string sort(string s)
	{
		for (int j = 0; j < s.length(); j++)
		{
			for (int i = 0; i < s.length()-1; i++)
			{
				if (s[i] > s[i + 1])
				{
					temp = s[i];
					s[i] = s[i + 1];
					s[i + 1] = temp;
				}
			}
		}
		return s;
	}
};

int main()
{
	//string max;
	Bubble bubble;
	cout << bubble.sort("4829517036") << endl;
	//cout << max << endl;
	return 0;
}