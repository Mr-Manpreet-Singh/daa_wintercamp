// Selection sort
//logic -> find the smallest element and swap with the initial index;

void selectionSort(int *arr, int n){

int temp;
    for(int i=0 ;i<n-1 ;i++)
    {
        for(int j =i+1 ; j< n ; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

}



#include <iostream>
using namespace std;

int main()
{
    int arr[]={25,0,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr,size);

    for(int i=0 ;i<size ;i++)
    cout<<arr[i]<<" ";
    return 0;
    
}