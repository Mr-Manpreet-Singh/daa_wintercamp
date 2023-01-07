#include <iostream>
using namespace std;


void sort (int *arr,int start, int mid, int end)
{
    int l1 = mid+1 - start;
    int l2 = end-mid ;
    int a1[l1] , a2[l2];

    for(int i=0 ; i<l1 ; i++)
    a1[i] = arr[i+start];
    for(int j=0 ; j<l2 ;j++)
    a2[j] = arr[j+mid+1];

    int i=0, j=0, k=start;
    while(i<l1 && j<l2)
    {
        if(a1[i]<a2[j])
        {
            arr[k]=a1[i];
            i++; 
        }
        else
        {
            arr[k]=a2[j];
            j++; 
        }
        k++;
    }
    while(i<l1)
    {
        arr[k]=a1[i];
        i++; k++;
    }
    while(j<l2)
    {
        arr[k]=a2[j];
        j++; k++;
    }
    //return ;
}

void merge(int* arr,int start ,int end)
{
    if(start<end)
    {
        int mid=(start+end)/2;
        //cout<<mid<<" ";
        merge(arr,start,mid);
        merge(arr,mid+1,end);
        sort(arr,start,mid,end);
    }
    //return ;
}

int main (){
    int arr[]={1,2,5,6,4,7,12,13,45,62,25};
    int size=sizeof(arr)/sizeof(arr[0]);

    merge(arr,0,size-1);

    for(int i=0 ;i<size ;i++)
    cout<<arr[i]<<" ";
    return 0;
}