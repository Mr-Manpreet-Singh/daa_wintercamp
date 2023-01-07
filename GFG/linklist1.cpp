#include <iostream>
using namespace std;

class Node{
    public:
    int data;
     Node *next;

    Node(int data){
        this->data=data;
        next=NULL;
    }
};

void print(Node *head)
{
    if(head==NULL)
    return ;
    cout<<head->data<<" ";
    print(head->next);
}

int search(Node *head,int find)
{
    int count =0;
    while(head!=NULL)
    {
        count++;
        if(head->data==find)
        {
            return count;            
        }
        head=head->next;
    }
    return -1;
}

void insertionAtStart (Node *&head, int val)
{
    Node *temp= new Node(val);
    temp->next=head;
    head=temp;
}
void insertionAtEnd (Node *&head, int val)
{
    Node *temp= new Node(val);
    Node *temp1=head;
    while(temp1->next!=NULL)
    { temp1=temp1->next ;}
    temp1->next=temp;
    temp->next=NULL;
}

void reverse (Node *&head)
{
    Node *curr=head;
    Node *forward=head->next;
    Node *prev=NULL;
    while(forward!=NULL)
    {
        
        curr->next=prev;
        prev=curr;
        curr=forward;
        forward=forward->next;
                
    }
    curr->next=prev;
    head=curr;

}

void insertionAtPos (Node *&head, int pos,int val)
{
    Node *temp1=new Node(val);
    if(pos==1)
    {
        temp1->next=head;
        head=temp1;
        return ;
    }

    int count=1;
    Node *temp=head;

    while(temp!=NULL &&count+1<pos)
    {
        temp=temp->next;
        count++;
    }

    if(temp!=NULL)   // size entered beyond linklist
    {
        temp1->next=temp->next;
        temp->next=temp1;
    }
    
}


void Sortedinsertion (Node *&head,int val)  //25 35/55
{
    Node* prev=head;
    Node *n = new Node(val);
    if(head->data>val)
    {
        n->next=head;
        head=n;
        return ;
    }

    while( prev->next!=NULL  && prev->next->data < val )
    {
        prev=prev->next;
    }

    
    n->next=prev->next;
    prev->next=n;

}


void printMiddle(Node *head)
{

    Node *slow=head;
    Node *fast=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<"\nMiddle Element : "<<slow->data<<"\n";
}

void printNodeFromEnd(Node *head,int n)   // Nnode from end using two pointers

{
    if(!head)
    return;
    Node *first=head;
    Node *second=head;
    int count=n;

    while(first!=NULL && count>0)
    {
        first=first->next;
        count--;
    }
    if(count)
    {
        cout<<"\nliked List size is less";
        return;
    }
    while(first!=NULL)
    {
        first=first->next;
        second=second->next;
    }
    
    cout<<"\n"<<n<<" node from end is : "<<second->data;
}


int main ()
{
     Node *head;
    head = new  Node(25);
    head->next = new Node(35);
    head->next->next = new Node(55);

     Node *temp=head;
    /* while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } */
    cout<<"\n";
    //cout<<"\nSearch element location : "<<search(head,25)<<"\n";
    //insertionAtStart(head,100);
    //insertionAtEnd(head,99);
    //print(head);
    //reverse(head);
    //cout<<"\n\n";
    //print(head);
    //insertionAtPos(head,3,13);
    
    Sortedinsertion(head,1);
    cout<<"\n\n";
    print(head);
    //cout<<head->data;
    //printMiddle(head);
    printNodeFromEnd(head,5);

    return 0;

}