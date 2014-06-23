using namespace std;
#include <iostream>
#include <cstdlib>
struct node
{
    int data;
    node* next;
};
node* head;
void insert1(int x)
{
    node* temp=new node();
    temp->data=x;
    temp->next=head;
    head=temp;
}
void print()
{
    node* temp=new node();
    temp=head;
    cout<<"\nThe list is : ";
    while(temp->next!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<temp->data;
    cout<<"\n";
}
int main()
{
    head=NULL;
    int n,x;
    cout<<"Enter the number of inputs: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter the number : ";
        cin>>x;
        insert1(x);
    }
    print();

 return 0;
}
