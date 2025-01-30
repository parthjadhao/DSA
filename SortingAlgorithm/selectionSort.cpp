#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n) {
    for (int i = 0; i <= n - 2; i++) {
        int min = i;
        for (int j = i; j <= n-1; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {1, 6, 3, 5, 4, 2};
    int n = 6;

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    SelectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
