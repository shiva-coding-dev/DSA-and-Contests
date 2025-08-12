#include <bits/stdc++.h>
using namespace std;

long long comparisonCount = 0;

int partitionRandom(vector<int> &arr, int l, int r) {
    int pivotIndex = l + rand() % (r - l + 1);
    swap(arr[pivotIndex], arr[r]);
    int pivot = arr[r];
    int i = l;
    for (int j = l; j < r; j++) {
        comparisonCount++; 
        if (arr[j] <= pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[r]);
    return i;
}

int randomizedSelect(vector<int> &arr, int l, int r, int k) {
    if (l == r)
        return arr[l];
    int pivotIndex = partitionRandom(arr, l, r);
    int order = pivotIndex - l + 1;
    if (k == order)
        return arr[pivotIndex];
    else if (k < order)
        return randomizedSelect(arr, l, pivotIndex - 1, k);
    else
        return randomizedSelect(arr, pivotIndex + 1, r, k - order);
}

int main() {
    srand(time(0));
    ifstream in("data.txt");
    vector<int> arr;
    int num;
    while (in >> num) arr.push_back(num);

    int i = 500;
    int result = randomizedSelect(arr, 0, arr.size() - 1, i);

    cout << i << "-th smallest element: " << result << "\n";
    cout << "Total comparisons: " << comparisonCount << "\n";
    return 0;
}
