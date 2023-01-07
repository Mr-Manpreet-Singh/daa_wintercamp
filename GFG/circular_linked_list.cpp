#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

void count_length(Node*);
void print_list(Node*);
void check_circular(Node*);


int main ()
{
    // inputs / starting List -----------
    Node *head= new Node(100);
    head->next=head;
    //head->next= new Node(90);
    //head->next->next= new Node(80);
    //head->next->next->next= head;
    
    char ch='\0';
    while(true)
    {

        cout<<"\n--  --  --  --  --  --\n";
        cout<<"'1'  Print List\n";
        cout<<"'2'  Count Length\n";
        cout<<"'3'  Check Circular\n";
        cout<<"'e'  Exit Program\n";
        cout<<"\nEnter Choice(1/2/3/e): ";
        cin>>ch;
        switch(ch)
        {
            case '1':
            print_list(head);
            break;
            case '2':
            count_length(head);
            break;
            case '3':
            check_circular(head);
            break;
            case 'e':
            return 0;
            default : 
            cout<<"! ! !\tEnter Valid input\t! ! !";
        }
    }
    return 0;
}


void count_length(Node *head )
{
    if(head==NULL)
    {
        cout<<"Length of List :0\n";
        return;
    }

    Node *temp=head->next;
    int count=1;
    while(temp!=head)
    {
        count++;
        temp=temp->next;
    }
    cout<<"Length of List :"<<count<<"\n";

}
void print_list(Node *head)
{
    if(head==NULL)
    {
        cout<<"NULL\n";
        return;
    }

    Node *temp=head->next;
    cout<<head->data<<" ";
    while(temp!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";

}
void check_circular(Node *head)
{
    if(head==NULL)
    {
        cout<<"NULL\n"<<0;
        return;
    }

    Node *temp=head->next;
    while(temp!=head && temp!=NULL)
    {
        temp=temp->next;
    }
    if(temp)
    cout<<"List is circular\n";
    else
    cout<<"List is Not-circular\n";
}