// array intersection of sorted arrays and also print duplicates just once


#include <iostream>
using namespace std;

void intersection(int *a1,int *a2,int l1,int l2)
{
    int i=0,j=0;
    while (i<l1 && j<l2)
    {
        if(a1[i]==a1[i-1])   // correction if(i>0 && a1[i]==a1[i-1])
        {
            i++; continue;
        }
        else if (a1[i]>a2[j])
        j++;
        else if (a1[i]<a2[j])
        i++;
        else 
        {
            cout<<a1[i]<<" ";
            i++; j++;
        }


    }

}

int main (){
    int a1[]={1,2,2,2,3,4,4,5,6,6,7,8,9};
    int a2[]={2,2,4,5,8};
    int l1=sizeof(a1)/sizeof(a1[0]);
    int l2=sizeof(a2)/sizeof(a1[0]);

    intersection(a1,a2,l1,l2);
}