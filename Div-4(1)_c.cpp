#include <iostream>
#include <vector>
using namespace std;

bool can_sort(int n, int m, vector<int>& a, vector<int>& b) {
   
    int b_val = b[0];
    for (int i = 0; i < n - 1; ++i) {
      
        bool possible = false;
       
        if (a[i] <= a[i+1] || a[i] <= (b_val - a[i+1])) {
            possible = true;
        }
       
        if ((b_val - a[i]) <= a[i+1] || (b_val - a[i]) <= (b_val - a[i+1])) {
            possible = true;
        }
        if (!possible) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        vector<int> b(m);
        for (int i = 0; i < m; ++i) {
            cin >> b[i];
        }
        if (can_sort(n, m, a, b)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}