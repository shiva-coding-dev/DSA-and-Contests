#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n); 
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long total = 0;
    long long last = 1e18;  

    for (int i = n - 1; i >= 0; --i) {
        last = min(last - 1, a[i]); 
        if (last < 0) last = 0;      
        total += last;
    }

    cout << total << endl;
    return 0;
}
