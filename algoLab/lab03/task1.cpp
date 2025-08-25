#include <bits/stdc++.h>
using namespace std;

void newSearch(vector<int> arr, int target) {
    int a = 0, b = arr.size() - 1;
    while (a <= b) {
        int k = (a + b) / 2;
        if (arr[k] == target) {
            cout <<k<< "\n";
            return;
        }
        if (arr[k] > target) {
            b = k - 1;
        } else {
            a = k + 1;
        }
    }
    cout << "Number not present \n";
}

int main() {
    int n ;
    cin>>n;
    vector<int> a(n);
    for(auto &x: a)cin>>x;
    int target ;
    cin>>target;
    newSearch(a , target);
    return 0;
}