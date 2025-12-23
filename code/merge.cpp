#include <iostream>
#include <vector>
using namespace std;

void merge(vector <int> &arr, int st, int mid, int end) {
    vector <int> temp;
    int i = st, j = mid + 1;

    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }

    }

    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    for (int idx = 0; idx < temp.size(); idx++) {
        arr[idx + st] = temp[idx];
    }
}

void mergeSort(vector <int> &arr, int st, int end) {
    if (st < end){
        int mid = st + (end - st) / 2;

        mergeSort(arr, st, mid);
        mergeSort(arr, mid + 1, end);

        merge(arr, st, mid, end);
    }
}

void getInput(vector<int> &arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void printArray(const vector<int> &arr) {
    for (int x : arr)
        cout << x << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of inputs: ";
    cin >> n;

    vector<int> arr(n);   // IMPORTANT

    getInput(arr, n);
    mergeSort(arr, 0, n - 1);

    cout << "The sorted array is:\n";
    printArray(arr);

    return 0;
}
