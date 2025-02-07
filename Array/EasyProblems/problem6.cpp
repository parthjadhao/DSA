// left rotate the array by one place
#include<iostream>
using namespace std;

void leftRotate(int arr[],int n){
    int temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
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

    leftRotate(arr, n);

    cout << "Rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
