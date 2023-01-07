// insertion sort 
// left size sorte add next element to the sorted arr in perfect order


void insertionSort(int *arr,int n)
{
    int key,j;
    for(int i=1 ; i<n ;i++)
    {
        if(arr[i]<arr[i-1])
        {
            key=arr[i];
            for(j=i-1 ; j>=0 ; j--)
            {
                if(arr[j]>key)
                arr[j+1]=arr[j];
                else
                break;                
            }
            arr[j+1]=key;
        }
    }
}

#include <iostream>
using namespace std;

int main()
{
    int arr[]={25,0,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr,size);

    for(int i=0 ;i<size ;i++)
    cout<<arr[i]<<" ";
    return 0;
    
}