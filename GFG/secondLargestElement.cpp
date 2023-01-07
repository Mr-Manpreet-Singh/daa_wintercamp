 // second largest element of array

# include<iostream>
using namespace std;

int secondLargest(int *ptr, int n)
{
    int largest=0,slargest=-1 ;         //they both will store index

    for (int i=1 ; i<n ; i++)
    {
        if((ptr+i)>(ptr+largest))
        largest=i;
    }
    for (int i=0 ; i<n ; i++)
    {
        if(i!=largest)
        {  
            if(slargest==-1)
            slargest=i;
            else if(*(ptr+i)>*(ptr+slargest) )
            slargest=i;
        }
    }
    //cout<<"index of largest element : "<<largest<<"\n";
    //cout<<"index of slargest element : "<<slargest<<"\n";
    return slargest;

}

int main (){
    int n;
    cout<<"\n\nEnter number of elements :";
    cin>>n;

    int *ptr= new int (n);
    cout<<"Enter Array :";
    for (int i=0 ; i<n ; i++)
    {
        cin>>*(ptr+i);
    }
    //cout<<"king";
    int index = secondLargest(ptr,n);
    //cout<<"index : "<<index<<"\n";

    cout<<"Second Largest element : " <<*(ptr+index)<<"\n";

} 
