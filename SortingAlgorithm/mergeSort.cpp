#include <iostream>
using namespace std;

void MergeSort(int arr[],int low,int high) {
    if (low>=high)
    {
        int mid = (low+high)/2;
        MergeSort(arr,low,mid);
        MergeSort(arr,mid+1,high);
        Merge(arr,low,mid,high);
    }
}

void Merge(int arr[],int low,int mid,int high){
    int temp[high - low + 1];
    int left = low;
    int right = mid+1;
    int index = 0;
    while (left<=mid && right<=high)
    {
        if (arr[left]<=arr[right])
        {
            temp[index] = arr[left];
            left++;
            index++;
        }
        else{
            temp[index] = arr[right];
            right++;
            index++;
        }
    }
    while (left<=mid)
    {
        temp[index] = arr[left];
        left++;
        index++;
    }
    while (right<=high)
    {
        temp[index]=arr[right];
        right++;
        index++;
    }
    for (int i = 0; i <= high; i++)
    {
        arr[i] = temp[i];
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

    MergeSort(arr,0,n-1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
