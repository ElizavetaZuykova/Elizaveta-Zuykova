#include <iostream>
#include <vector>
#include <set>
 
using namespace std;
 
const int N = 1e5 + 1;
 
void delete_duplicates(int &n, int a[]) {
    set <int> s;
    vector <int> b;
 
    for (int i = 0; i < n; ++i) {
        if (!s.count(a[i])) {
            s.insert(a[i]);
            b.push_back(a[i]);
        }
        a[i] = 0;
    }
    n = b.size();
    for (int i = 0; i < n; ++i) {
        a[i] = b[i];
    }
}
 
int main() {
    int n;
    cin >> n;
    int a[N];
 
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    delete_duplicates(n, a);
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    return 0;
}
