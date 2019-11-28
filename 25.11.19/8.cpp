#include <iostream>
#include <vector>
using namespace std;

int main()

{
	int k;
	cin >> k;
	vector <int> mass(k + 1, true);
	prime[0] = prime[1] = false;
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
	int m = 1;
	if (k < 2)
	{
		m = 0;
	}
	for (int i = 2; i < k; i++)
	{
		if (prime[i] == true)
		{
			m *= i;
		}
	}
	cout << m;
	return 0;
}
