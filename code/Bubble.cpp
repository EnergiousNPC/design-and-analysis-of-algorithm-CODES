#include<iostream>
using namespace std;

void bubblesort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

void input(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << "Number: ";
        cin >> arr[i];
    }
}

int main(){
    int n;
    cout << "Enter the number of inputs: ";
    cin >> n;
    int arr[n];

    input(arr, n);
    bubblesort(arr, n);

    cout << "Bubble sorted array: ";
    print(arr, n);
}