#include <bits/stdc++.h>
using namespace std;


int partition(vector<int> &arr, int left, int right, int pivotValue) {

    int pivotIndex;
    for (pivotIndex = left; pivotIndex <= right; pivotIndex++) {
        if (arr[pivotIndex] == pivotValue) break;
    }
    swap(arr[pivotIndex], arr[right]);

    int storeIndex = left;
    for (int j = left; j < right; j++) {
        if (arr[j] < pivotValue) {
            swap(arr[storeIndex], arr[j]);
            storeIndex++;
        }
    }
    swap(arr[storeIndex], arr[right]);
    return storeIndex;
}


int findMedian(vector<int> &arr, int left, int right) {
    sort(arr.begin() + left, arr.begin() + right + 1);
    int n = right - left + 1;
    return arr[left + n / 2];
}


int deterministicSelect(vector<int> &arr, int left, int right, int i) {
    if (left == right) return arr[left];


    vector<int> medians;
    for (int start = left; start <= right; start += 5) {
        int end = min(start + 4, right);
        medians.push_back(findMedian(arr, start, end));
    }


    int pivot;
    if (medians.size() == 1) pivot = medians[0];
    else pivot = deterministicSelect(medians, 0, medians.size() - 1, medians.size() / 2);


    int pivotIndex = partition(arr, left, right, pivot);
    int k = pivotIndex - left + 1;

    if (i == k) return arr[pivotIndex];
    else if (i < k) return deterministicSelect(arr, left, pivotIndex - 1, i);
    else return deterministicSelect(arr, pivotIndex + 1, right, i - k);
}

int main() {
    vector<int> arr;
    ifstream input("input.txt");
    int num;
    while (input >> num) arr.push_back(num);
    input.close();

    int i = 500;
    if (i < 1 || i > arr.size()) {
        cout << "Invalid i value" << endl;
        return 0;
    }

    int result = deterministicSelect(arr, 0, arr.size() - 1, i);
    cout << i << "-th order statistic: " << result << endl;
    return 0;
}
