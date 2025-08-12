#include <iostream>
#include <random>
using namespace std;

int partition_of_array(vector<int> &a, int low, int high, int pivot_index) {
    swap(a[pivot_index], a[high]);
    int pivot_element = a[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (a[j] < pivot_element) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[high]);
    return i + 1;
}

void quick_sort(vector<int> &a, int low, int high) {
    if (low < high) {
        int n = high - low + 1;
        int pi;
        float ratio = -1;

        while (1) {
            int pivot_index = low + rand() % n;
            vector<int> temp = a; 
            pi = partition_of_array(temp, low, high, pivot_index);
            int left = pi - low;
            int right = high - pi;
            ratio = (float)max(left, right) / (float)min(left + 1, right + 1);
            if (ratio < 3.0) {
                pi = partition_of_array(a, low, high, pivot_index);
                break;
            }
        }
        quick_sort(a, low, pi - 1);
        quick_sort(a, pi + 1, high);
    }
}

int main() {
    srand(time(0));
    int n;
    cout << "Size of array: ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    quick_sort(v, 0, n - 1);
    cout << "Sorted array:\n";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}