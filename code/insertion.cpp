#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;

        for (int j = i+1; j < n; j++)
            if (arr[j] < arr[minIndex])
                minIndex = j;

        swap(arr[minIndex], arr[i]); // Swap smallest found with first
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void getInput(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> arr[i];
    }
}

int main() {
    int n;
    cout << "Enter the number of inputs ";
    cin >> n;
    int arr[n];

    getInput(arr, n);

    selectionSort(arr, n);

    cout << "Selection Sorted Array: ";
    printArray(arr, n);
}
