#include <iostream>
#include <vector>
using namespace std;

int main()

{
	int k;
	cin >> k;
	vector <int> mass(n + 1, true);
	for (int i = 2; i * i <= k; ++i)
	{
		if (prime[i] == true)
		{
			for (int j = i * i; j < k; j += i)
			{
				prime[j] = false;
			}
		}
	}
	for (int i = 3; i <= k; i++)
	{
		if (prime[i] == false)
		{
			cout << i << " ";
		}
	}
	return 0;
}
