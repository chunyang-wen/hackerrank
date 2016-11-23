#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

/* [low, high) */
void partition(vector<int>& arr, int low, int high) {
    if (low >= high - 1) {
        return;
    }
    vector<int> left;
    vector<int> right;
    int pivot = arr[low];
    for (int i = low + 1; i < high; ++i) {
        if (arr[i] < pivot) {
            left.push_back(arr[i]);
        } else {
            right.push_back(arr[i]);
        }
    }
    partition(left, 0, left.size());
    partition(right, 0, right.size());
    arr.clear();
    copy(left.begin(), left.end(), back_inserter(arr));
    arr.push_back(pivot);
    copy(right.begin(), right.end(), back_inserter(arr));

    copy(arr.begin(), arr.end(), ostream_iterator<int>(cout, " "));
    cout << "\n";

}

void quickSort(vector <int> &arr) {
    /* Complete this function */
    partition(arr, 0, arr.size());
}

int main() {
    int n;
    cin >> n;

    vector <int> arr(n);
    for(int i = 0; i < (int)n; ++i) {
        cin >> arr[i];
    }
    quickSort(arr);
    return 0;
}
