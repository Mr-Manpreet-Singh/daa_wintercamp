// binarytree all triversal
// count leaf and non lefe nodess
// check binary tree is balanced
// find height of binary tree





#include <iostream>
using namespace std;


int recursion (int *arr,int element , int lb, int ub)
{
    
    if(lb>ub)
    return -1;

    int mid=(ub+lb)/2;
    if (arr[mid]==element)
    return mid;
    else if(arr[mid]<element)
    return recursion(arr,element,mid+1,ub);
    else
    return recursion(arr,element,lb,mid-1);
}

void binarySearch(int *arr, int n, int element){

    cout<<"\nIndex :"<<recursion(arr,element,0,n);
    
}

int main (){

    int arr[]={1,2,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    binarySearch (arr,size,3);

    return 0;
}