#include<iostream>
using namespace std;

void selection(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min_index = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        if(min_index != i) swap(arr[i], arr[min_index]);
    }
}

void getInput(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << "Number: ";
        cin >> arr[i];
    }
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cout << "Enter the number of inputs: ";
    cin >> n;
    int arr[n];

    getInput(arr, n);
    selection(arr, n);

    cout << "Selection sorted array: ";
    print(arr, n);
}