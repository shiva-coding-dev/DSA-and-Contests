#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "00101001010011";
    bitset<14> a(s);// it's not a type of set it's ARRAY so we can get the value by indexs
    for (int i = a.size() - 1; i >= 0; i--) cout << a[i] << " ";
    //to get the original order of the array we have to print it in the reverse 
    
    return 0;
}