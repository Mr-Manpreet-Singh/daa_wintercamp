// counting sort is smae as hashing 

#include <iostream>
using namespace std;


void countSort(int*arr , int n)
{
    int max=arr[0];
    
    for(int i=1 ;i <n  ;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }

    int hash[max+1]={0};
    for(int i=0 ; i<n ; i++)
    {
        hash[arr[i]]++;
    }
    for(int i=0 ; i<max+1 ; i++)
    {
        if(hash[i]>0)
        cout<<i<<" ";
    }
    cout<<"\nSize of hash :"<<sizeof(hash)/sizeof(hash[0]);
}

/*    -------------  Using min also;
void countSort(int*arr , int n)
{
    int max=arr[0];
    int min=arr[0];
    for(int i=1 ;i <n  ;i++)
    {
        if(arr[i]>max)
        max=arr[i];
        if (arr[i]<min)
        min=arr[i];
    }

    int hash[max+1-min]={0};
    for(int i=0 ; i<n ; i++)
    {
        hash[arr[i]-min]++;
    }
    for(int i=0 ; i<max+1-min ; i++)
    {
        if(hash[i]>0)
        cout<<i+min<<" ";
    }
    cout<<"\nSize of hash :"<<sizeof(hash)/sizeof(hash[0]);
}

 */


int main()
{
    int arr[]={25,0,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);

    countSort(arr,size);
    return 0;
}