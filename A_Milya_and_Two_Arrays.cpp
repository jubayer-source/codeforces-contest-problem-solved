#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        set<int> uniqeelement;
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                uniqeelement.insert(a[i] + b[j]);
            }
        }
        
        if (uniqeelement.size() >= 3) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}