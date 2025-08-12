#include <bits/stdc++.h>
using namespace std;

long long comparisonCount = 0;

int partition(vector<int> &arr, int l, int r, int pivot) {
    int pivotIndex;
    for (int i = l; i <= r; i++) {
        comparisonCount++;
        if (arr[i] == pivot) {
            pivotIndex = i;
            break;
        }
    }
    swap(arr[pivotIndex], arr[r]);
    int storeIndex = l;
    for (int i = l; i < r; i++) {
        comparisonCount++;
        if (arr[i] < pivot) {
            swap(arr[storeIndex], arr[i]);
            storeIndex++;
        }
    }
    swap(arr[storeIndex], arr[r]);
    return storeIndex;
}

int medianOfMedians(vector<int> &arr, int l, int r) {
    if (r - l < 5) {
        sort(arr.begin() + l, arr.begin() + r + 1, [&](int a, int b) {
            comparisonCount++;
            return a < b;
        });
        return arr[l + (r - l) / 2];
    }
    for (int i = l; i <= r; i += 5) {
        int subRight = min(i + 4, r);
        sort(arr.begin() + i, arr.begin() + subRight + 1, [&](int a, int b) {
            comparisonCount++;
            return a < b;
        });
        int medianIndex = i + (subRight - i) / 2;
        swap(arr[l + (i - l) / 5], arr[medianIndex]);
    }
    return medianOfMedians(arr, l, l + (r - l) / 5);
}

int deterministicSelect(vector<int> &arr, int l, int r, int k) {
    if (l == r)
        return arr[l];
    int pivot = medianOfMedians(arr, l, r);
    int pivotIndex = partition(arr, l, r, pivot);
    int order = pivotIndex - l + 1;
    if (k == order)
        return arr[pivotIndex];
    else if (k < order)
        return deterministicSelect(arr, l, pivotIndex - 1, k);
    else
        return deterministicSelect(arr, pivotIndex + 1, r, k - order);
}

int main() {
    ifstream in("data.txt");
    vector<int> arr;
    int num;
    while (in >> num) arr.push_back(num);

    int i = 500; // i-th order statistic
    int result = deterministicSelect(arr, 0, arr.size() - 1, i);

    cout << i << "-th smallest element: " << result << "\n";
    cout << "Total comparisons: " << comparisonCount << "\n";
    return 0;
}
