#include<iostream>
using namespace std;

void rotatedByD(int arr[], int n,int d){
    // storing temp 
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    // shiftng
    for (int i = d; i < n; i++)
    {
        arr[i-d] = arr[i];
    }
    // putting temp
    for (int i = n-d; i < n; i++)
    {
        arr[i] = temp[i-(n-d)];
    }
    
}

int main()
{
    int arr[] = {1, 6, 3, 5, 4, 2};
    int n = 6;

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    rotatedByD(arr, n,3);

    cout << "Rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
