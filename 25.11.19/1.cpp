#include <iostream>
using namespace std;

int main()
{
	int x, y = 78487894;
	for (int x = 1; 2021 * x < 78487894; x++)
	{
		if ((78487894 - 2021 * x) % 2020 == 0) {
			y = (78487894 - 2021 * x) / 2020;
			cout << x << " " << y << '\n';
		}
	}
	return 0;
}
