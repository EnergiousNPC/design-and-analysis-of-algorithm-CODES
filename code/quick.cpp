#include <iostream>
using namespace std;

// Partition function
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // pivot element
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Quick sort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Print array
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
    cout << "Enter the number of inputs: ";
    cin >> n;
    int arr[n];

    getInput(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "The sorted array is: \n";
    printArray(arr, n);

    return 0;
}
