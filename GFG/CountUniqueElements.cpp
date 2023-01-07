#include<iostream>
#include<unordered_set>
using namespace std;

//-- Unordered_set

/* int countUnique(int*arr,int n){
    
    unordered_set<int>s;  // or   unordered_set<int>s (arr,arr+n)   ; 

    for(int i=0 ;i<n ;i++)
    s.insert(arr[i]);
    return s.size();
} */


//-- Native approach 

int countUnique(int*arr,int n){

    int count=0;
    bool flag=false;

    for(int i=0 ; i<n ;i++)
    {
        flag=false;
        for(int j=0 ;j<i ; j++)
        {
            if(arr[i]==arr[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
        count++;
    }
    return count;
}




int main (){

    int arr[]= {1,2,3,4,5,6,7,8,9,0,2,3,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"\n\n"<<countUnique(arr,size);

    return 0;
}