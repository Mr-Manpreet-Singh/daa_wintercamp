#include <iostream>
using namespace std;

int partion( int * arr, int start,int end){
    
    int pivot=arr[end];
    int i=start-1;
    int temp=0;

    for(int k=start ; k<= end-1 ;k++)
    {
        if(arr[k]<pivot)
        {
            i++; 
            // --swap
            temp=arr[k];
            arr[k]=arr[i];
            arr[i]=temp;
        }
    }
    // locating pivot
    i++;
    temp=arr[end];
    arr[end]=arr[i];
    arr[i]=temp;
    return (i);   // returning pivot location
}

void quickSort(int *arr,int start,int end){
    
    if(start<end)
    {
        int pivot=partion(arr,start,end);
        quickSort(arr,start,pivot-1);
        quickSort(arr,pivot+1, end);
    }
}


int main()
{
    int arr[]={25,0,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);

    quickSort(arr,0,size-1);

    for(int i=0 ;i<size ;i++)
    cout<<arr[i]<<" ";
    return 0;
    
}