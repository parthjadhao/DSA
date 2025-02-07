// remove duplicate from the sorted array
#include<iostream>
using namespace std;

int removeingDuplicate(int arr[],int n){
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[i]!=arr[j])
        {
            arr[i+1] = arr[j];
            i++;
        }
        
    }
    return (i+1);
}

int main()
{
    int arr[] = {1,1,22,22,33,33,44};
    int duplicateElement = removeingDuplicate(arr,5);
    cout<<"number of unique element : "<<duplicateElement;
    return 0;
}
