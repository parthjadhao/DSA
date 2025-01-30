#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
    {
        int j = i;
        while (j>0 && arr[j-1]>arr[j])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
        
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

    InsertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
