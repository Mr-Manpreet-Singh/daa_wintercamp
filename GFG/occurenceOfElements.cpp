#include<iostream>
#include<unordered_map>
using namespace std;


void occurence (int*arr, int n){

    unordered_map<int,int> map;

    for(int i=0 ;i<n ;i++)
    {
        map[arr[i]]++;
    }
    for(auto &x:map)
    cout<<"Occurence of "<<x.first<<" is : "<<x.second<<"\n";

}



int main (){

    int arr[]= {1,2,3,4,5,6,7,8,9,0,2,3,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    occurence(arr,size);

    return 0;
}