#include <iostream>
#include <vector>
#include <set>
using namespace std;
const int N = 1e5 + 1;
void delete_duplicates(int &n, int b[]) {
    set <int> t;
    vector <int> z;
    for (int i = 0; i < n; ++i) {
        if (!t.count(b[i])) {
            t.insert(b[i]);
            z.push_back(b[i]);
        }
        a[i] = 0;
    }
    n = z.size();
    for (int i = 0; i < n; ++i) {
        b[i] = z[i];
    }
}
int main() {
    int x;
    cin >> x;
    int x[N];
    for (int i = 0; i < x; ++i) {
        cin >> x[i];
    }
    delete_duplicates(x, b);
    for (int i = 0; i < x; ++i) {
        cout << x[i] << " ";
    }
    return 0;
}
