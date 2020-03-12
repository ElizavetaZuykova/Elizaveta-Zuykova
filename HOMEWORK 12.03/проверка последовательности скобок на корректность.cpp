#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	string let;
	cin >> let;
	bool flag = true;
	vector<int> c(6);
	vector<bool> ar(1);
	for (int i = 0; i < 6; i++)
	{
		ar[i] = 0;
	}
	for (int i = 0; i < let.length(); i++)
	{
		if (let[i] == '(')
			c[0]++;
		else if (let[i] == ')')
			c[1]++;
		else if (let[i] == '[')
			c[2]++;
		else if (let[i] == ']')
			c[3]++;
		else if (let[i] == '{')
			c[4]++;
		else if (let[i] == '}')
			c[5]++;
	}
	if (c[1] == c[0] && c[2] == c[3] && c[4] == c[5])
		flag = true;
	else
		flag = false;
	if (flag == true)
	{
		for (int i = 0; i < let.length(); i++)
		{
			if (let[i] == '(')
			{
				bool flag2 = false;
				for (int j = i; j < let.length(); j++)
				{
					if (let[j] == ')' && (j - i) % 2 == 1 && flag == true)
					{
						flag2 = true;
						break;
					}
					else
						flag2 = false;
				}
				if (flag2 == true)
					flag = true;
				else
				{
					flag = false;
					break;
				}
			}
			else if (let[i] == '[')
			{
				bool flag2 = false;
				for (int j = i; j < let.length(); j++)
				{
					if (let[j] == ']' && (j - i) % 2 == 1 && flag == true)
					{
						flag2 = true;
						break;
					}
					else
						flag2 = false;
				}
				if (flag2 == true)
					flag = true;
				else
				{
					flag = false;
					break;
				}
			}
			else if (let[i] == '{')
			{
				bool flag2 = false;
				for (int j = i; j < let.length(); j++)
				{
					if (let[j] == '}' && (j - i) % 2 == 1 && flag == true)
					{
						flag2 = true;
						break;
					}
					else
						flag2 = false;
				}
				if (flag2 == true)
					flag = true;
				else
				{
					flag = false;
					break;
				}
			}
		}
	}
	if (flag == true)
		cout << "right";
	else
		cout << "wrong";
	return 0;
}
