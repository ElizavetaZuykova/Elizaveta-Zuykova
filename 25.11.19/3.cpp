#include <iostream>
#include <vector>
using namespace std;

int main()

{
	int n;
	cin >> n;
	vector <mass> prime(n + 1, true);
	for (int i = 2; i * i <= n; ++i)
	{
		if (prime[i] == true)
		{
			for (int j = i * i; j < n; j += i)
			{
				prime[j] = false;
			}
		}
	}
	for (int i = 3; i <= n; i++)
	{
		if (prime[i] == false)
		{
			cout << i << " ";
		}
	}
	return 0;
}
