#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int left, int right) {
    int pivot = arr[right];
    int i = left - 1;
    for (int j = left; j < right; j++) {
        if (arr[j] <= pivot) {
            swap(arr[++i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[right]);
    return i + 1;
}


int randomizedPartition(vector<int> &arr, int left, int right) {
    int pivotIndex = left + rand() % (right - left + 1);
    swap(arr[pivotIndex], arr[right]);
    return partition(arr, left, right);
}


int randomizedSelect(vector<int> &arr, int left, int right, int i) {
    if (left == right)
        return arr[left];
    int q = randomizedPartition(arr, left, right);
    int k = q - left + 1; 
    if (i == k)
        return arr[q];
    else if (i < k)
        return randomizedSelect(arr, left, q - 1, i);
    else
        return randomizedSelect(arr, q + 1, right, i - k);
}

int main() {
    srand(time(0));
    vector<int> arr;


    ifstream input("input.txt");
    int num;
    while (input >> num) {
        arr.push_back(num);
    }
    input.close();

    int i = 500;
    if (i < 1 || i > arr.size()) {
        cout << "Invalid value of i" << endl;
        return 0;
    }

    int result = randomizedSelect(arr, 0, arr.size() - 1, i);
    cout << i << "-th order statistic: " << result << endl;

    return 0;
}
