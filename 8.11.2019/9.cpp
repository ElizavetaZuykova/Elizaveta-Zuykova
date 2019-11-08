#include <iostream>
using namespace std;
int strange_sum(int * x, int y, int z) {
    if (z - y == 1)
    {
        return x[y];
    }
    return strange_sum(x, y, (z + y) / 2) + strange_sum(x, (z + y) / 2, z);
}
int main() {
    int k;
    cin >> k;
    int *x = new int[k];
    for (int i = 0; i < k; ++i)
    {
        cin >> x[i];
    }
    cout << strange_sum(x, 0, k);
    return 0;
}
