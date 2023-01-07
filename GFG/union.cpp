// Union of two sorted arrays and remve duplicates


#include <iostream>
using namespace std;

void Union(int *a1,int *a2,int l1,int l2){

    int i=0,j=0;
    while(i<l1 && j <l2)
    {
        if(i>0 && a1[i]==a1[i-1])    //if eleement is duplicated in a1[], we have
        {                            // considered only first iteration   
            i++; continue;
        }
        if(j>0 && a2[j]==a2[j-1])    // silimarly for a2[]
        {
            j++; continue;
        }
        if(a1[i]==a2[j])               //if elemet in repeated in both
        {
            cout<<a2[j]<<" ";
            j++; i++;
        }
        else if(a1[i]<a2[j])
        {
            cout<<a1[i]<<" ";
            i++;
        }
        else
        {
            cout<<a2[j]<<" ";
            j++;
        }
    }
}

int main (){
    int a1[]={1,2,2,2,3,4,4,5,6,6,7,8,9};
    int a2[]={2,2,4,5,8};
    int l1=sizeof(a1)/sizeof(a1[0]);
    int l2=sizeof(a2)/sizeof(a1[0]);

    Union(a1,a2,l1,l2);
}