#include <iostream>
using namespace std;

void bubbleSort(int *arr ,int n)
{
    bool flag=false;
    int temp;
    for(int i=0 ; i<n-1 ;i++)
    {
        for(int j=0 ; j<n-i-1 ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=true;
            }
        }
        if(flag=false)
        break;
    }
}


int main()
{
    int arr[]={25,0,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,size);

    for(int i:arr)
    cout<<i<<" ";
    return 0;
    
}