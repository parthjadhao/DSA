#include <iostream>
using namespace std;

int partision(int arr[],int low ,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i<j)
    {
        while (arr[i]<= pivot && i<=high+1)
        {
            i++;
        }
        while (arr[j]>pivot && j>=low - 1)
        {
            j--;
        }
        if (i<j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
    
}

void QuickSort(int arr[],int low,int high) {
    if (low<high)
    {
        int partisionIndex = partision(arr,low,high);
        QuickSort(arr,low,partisionIndex-1);
        QuickSort(arr,partisionIndex+1,high);
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

    QuickSort(arr,0,n-1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
