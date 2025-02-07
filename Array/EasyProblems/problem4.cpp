#include<iostream>
using  namespace std;

bool isSorted(int arr[],int n){
    bool sorted = true;
    for (int i = 1; i < n; i++)
    {
        if (arr[i-1]>arr[i])
        {
            sorted = false;
            break;
        }
    }
    return sorted;
}

int main()
{
    int arr[] = {45,23,123,5,45};
    bool sorted = isSorted(arr,5);
    cout<<"array is sorted : "<<sorted;
    return 0;
}
