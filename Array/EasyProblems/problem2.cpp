// Second largest element in the array
// better solution
#include<iostream>
using namespace std;

int findSecondLargest(int arr[],int n){
    int largestElement = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>largestElement)
        {
            largestElement = arr[i];
        }
    }
    int slargestElement = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>slargestElement && arr[i] != largestElement)
        {
            slargestElement = arr[i];
        }
        
    }
    return slargestElement;
}

int main()
{
    int arr[] = {23,322,54,23,56};
    int secondLargest = findSecondLargest(arr,5);
    cout<<"second largest element : "<<secondLargest;   
    return 0;
}
