#include <iostream>
using namespace std;


void binarySearch(int *arr, int n, int element){

    int lb=0 ,ub=n , mid;

    while(lb<=ub)
    {
        mid=(lb+ub)/2;
        if(arr[mid]==element)
        {
            cout<<"index :"<<mid;
            return ;            
        }
        else if(arr[mid]<element)
        {
            lb=mid+1;
            continue;
        }
        else
        {
            ub=mid-1;
            continue;
        }
    }
    cout<<"\n- - - Not Found - - - ";
}

int main (){

    int arr[]={1,2,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    binarySearch (arr,size,9);

    return 0;
}