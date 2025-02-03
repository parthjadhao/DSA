// find largest element in the array
#include<iostream>
using namespace std;

int largestElement(int arr[],int arrLength){
    int largestNumber = arr[0];
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] > largestNumber)
        {
            largestNumber = arr[i];
        }
    }
    return largestNumber;
}

int main()
{
    int arr[] = {2,4,3,5,2,6};
    int largest = largestElement(arr,6);
    cout<<"largest element in array is "<<largest;
    return 0;
}
