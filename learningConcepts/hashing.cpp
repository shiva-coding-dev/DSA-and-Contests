#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1,2,3,4,5,3,5,6,2,4,7,8,9,4,6,3,2,1};
    vector<int> hash(10,0);
    for(int i = 0;i< a.size() ; i++){
        hash[a[i]] += 1; 
    }
    for(int i=0;i<hash.size() ; i++){
        if(hash[i]!= 0){
            cout<<"Frequency of "<<i<<" - "<<hash[i]<<"\n";
        }
    }

    // Character hashing 
    string s = "aabbcbabsbbdsbabc";
    int hashh[26] = {0};
    for(int i = 0 ; i < s.size() ; i++){
        hashh[s[i]-'a']++;
    }
    for(int i=0;i<26 ; i++){
        if(hashh[i]!= 0){
            cout<<"Frequency of "<<char(i+'a')<<" - "<<hashh[i]<<"\n";
        }
    }

    //The above step could be done with ease with the help of the unordered and maps
    unordered_map<int , int> mp;
    for(int i = 0; i < a.size() ; i++){
        mp[a[i]]++;
    }
    for(auto it:mp){
        cout<<"Frequency of "<<it.first<<" - "<<it.second<<"\n";
    }
     
    return 0;
}