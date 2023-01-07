//hashing > chaining
// C++ program to demonstrate implementation of our 
// own hash table with chaining for collision detection 

// bucket is no of keys 
//worst case sinario that all the values are in one key therefore doubly linklist of size bucket

#include<iostream>
#include<list>
using namespace std;


struct MyHASH
{
    list<int>* table;                   //pointer to point list type address 
    int Bucket ;                        //no of unique keys

    MyHASH(int b)
    {
        Bucket=b;
        table = new list<int> [b];      //pointer store the address of 'B' lists
    }
    void insert(int key)
    {
        int index = key%Bucket;         //
        table[index].push_back(key);    //
    }   
    void remove (int key)
    {
        int index = key % Bucket;       
        table[index].remove(key);       
    }
    void search (int key)
    {       
        int index = key%Bucket;             
        for(const auto &x:table[index])     
        {
            if(x==key)
            {
                cout<<1<<"\n";
                return;
            }
        }
        cout<<0<<"\n";
    }
};


int main ()
{
    MyHASH obj(7);

    obj.insert(10);
    obj.insert(11);
    obj.insert(12);
    obj.insert(13);
    obj.insert(17);
    obj.remove(12);
    obj.search(17);
    obj.search(0);


    return 0;
        
}