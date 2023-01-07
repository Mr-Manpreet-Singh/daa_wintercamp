#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};


void insert_at_pos(Node *&head,int val, int pos)
{
    Node *temp=new Node(val);
    if(head==NULL)
    {
        head=temp;
    }
}
void insert_start(Node *&head,int val)
{
    Node *temp=new Node(val);
    if(head==NULL)
    {
        head=temp;
    }
    else 
    {
        head->left=temp;
        temp->right=head;
        head=temp;
    }
}
void insert_end(Node *&head,int val)
{
    Node *temp=new Node(val);
    if(head==NULL)
    {
        head=temp;
    }
    else{
        Node *curr=head;
        while(curr->right)
        curr=curr->right;

        curr->right=temp;
        temp->left=curr;
    }
    
}

void print_list(Node *head)
{
    Node *temp=head;
    while(temp->right)
    {
        cout<<temp->data<<" ";
        temp=temp->right;
    }
    cout<<temp->data<<"\n";
    // now temp is pointing to last  node;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->left;
    }
    cout<<"\n"; 
}

int main ()
{
    Node *head=NULL;
    insert_end(head,10);
    insert_end(head,9);
    insert_end(head,8);
    insert_end(head,7);
    insert_end(head,6);
    insert_end(head,5);
    insert_start(head,11);
    insert_start(head,12);
    insert_start(head,13);
    print_list(head);

    return 0;
}