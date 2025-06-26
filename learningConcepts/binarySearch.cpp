// Searching for an Element in an sorted array 
// including the chrono library to find the runtime of the function 
#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
# include<chrono>
using namespace std::chrono;
using namespace std;

void fullSearch(int n , vector<int> a){
    for(int i=0;i<a.size();i++){
        if(a[i] == n){
            cout<<"Found at index - "<<i<<"\n";
            return;
        }
    }
    cout<<"Not found\n";
}

void newSearch(vector<int> arr, int target) {
    sort(arr.begin(), arr.end());

    int a = 0, b = arr.size() - 1;

    while (a <= b) {
        int k = (a + b) / 2;
        if (arr[k] == target) {
            cout << "Found"<< "\n";
            return;
        }
        if (arr[k] > target) {
            b = k - 1;
        } else {
            a = k + 1;
        }
    }
    cout << "Not Found\n";
}
int main() {    
    int n ;
    cin>>n;
    vector<int> a(10);
    for(int i=0;i<10;i++)cin>>a[i];
     // Record start time
    auto start_1 = high_resolution_clock::now();

    fullSearch(n,a); // Call the function

    // Record end time
    auto stop_1 = high_resolution_clock::now();

    // Calculate the duration
    auto duration_1 = duration_cast<microseconds>(stop_1 - start_1);

    cout << "Execution time: for Old Binary Search - " << duration_1.count() << " microseconds" << endl;

    auto start_2 = high_resolution_clock::now();

    newSearch(a,n); // Call the function

    // Record end time
    auto stop_2 = high_resolution_clock::now();

    // Calculate the duration
    auto duration_2 = duration_cast<microseconds>(stop_2 - start_2);

    cout << "Execution time: New Binary Search - " << duration_2.count() << " microseconds" << endl;
    return 0;
}