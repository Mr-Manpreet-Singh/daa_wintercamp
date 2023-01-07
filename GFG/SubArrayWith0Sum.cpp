//Sub array with zero sum 
// prefix sum | unordered_set | set.insert() |set.find()    O(N)

//T1
       //1 4 13 -3-10 5
//preSum 1 5 18 15 5  5

//T2
       //1 3 -4 -3 -10  5
//preSum 1 4  0 -3 -13 -8



#include <iostream>
#include <unordered_set>
using namespace std;


bool zeroSum(int*arr , int n){

    int preSum=0;
    unordered_set <int>s;
    
    for(int i=0 ;i<n ; i++)
    {
        preSum=preSum +arr[i];

        if(s.find (preSum)!=s.end())         /*reason for this syntax mensioned below*/
            return true;  

        else if(preSum==0)
            return true;

        s.insert(preSum);     
                
    }
    return false;
}


int main (){
    int arr[] = {1,4,13,-3,-10,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<zeroSum(arr,size);
}



/* 
unordered_set_name.find(key)

Parameter: This function accepts a mandatory parameter key which specifies the element to be searched for. 
Return Value: It returns an iterator to the element if found, else returns an iterator pointing to the end of unordered_set. */