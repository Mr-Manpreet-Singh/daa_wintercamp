#include<iostream>
#include<unordered_map>


using namespace std;


int longestSubArray(int *arr, int n, int sum)
{
    int pSum = 0,res=0;
    unordered_map<int,int> map ;
    map[0]=-1;

        for (int i=0 ;i<n ; i++ )
        {
            pSum+=arr[i];
            if(map.find(pSum-sum)!=map.end())
            {
                res=max(res,i-map[pSum-sum]);
            }
            if(map.find(pSum-sum) == map.end())
            {
                map[pSum]=i;
            }
        }
        return res;
    
}

int main (){
    int arr [ ]= {10,5,2,7,1,9};
    int n =sizeof(arr)/sizeof(arr[0]) , sum = 15 ;

    cout<<longestSubArray(arr,n,sum);

    return 0;
}
