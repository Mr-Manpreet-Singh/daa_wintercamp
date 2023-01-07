#include <iostream>
#include <unordered_set>
using namespace std;

bool givenSumFun (int *arr, int n , int sum)
{
    int preSum=0;
    unordered_set<int> s;

    for(int i=0;i<n;i++)
    {
        preSum=preSum+arr[i];
        if(s.find(preSum)!=s.end())
        return true;
        if(s.find(preSum-sum)!=s.end())
        return true;

        s.insert(preSum);

    }
    return false;
}

int main ()
{
    int arr[]= {5,8,6,13,3,-1};
    int givenSum=15 , n = sizeof(arr)/sizeof(arr[0]);
    cout<< givenSumFun(arr,n,givenSum);

    return 0;
}

