#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
    Node()
    {
        data=0;
        next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
    class linkedlist{
        public:
        Node *head;
        linkedlist(){
            head=NULL;
        }
        void insertatend(int data);
        void check();
        void setcycle(int n2);
        void display();
    };
    void linkedlist:: insertatend(int data){
        Node* newnode=new Node(data);
        if(head==NULL)
        {
            head = newnode;
            return;
        }
        Node* temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    void linkedlist:: display(){
        Node* temp = head;
        if(head==NULL){
            cout<<"list empty"<<endl;
        }
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
    void linkedlist::check()
    {
        Node* fast = head;
        Node* slow = head;
        while(slow!=NULL&& fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                cout<<"true"<<endl;
                cout<<"Meeting Point "<<slow->data<<endl;
                slow=head;
                while(slow->data!=fast->data)
                {
                    slow = slow->next;
                    fast = fast->next;
                }
                cout<<"Starting position "<<slow->data<<endl;
                return;
            }
        }
        cout<<"False"<<endl;
        return;
        
    }
    void linkedlist::setcycle(int n2){
        Node* curr= head;
        Node* end=head;
        while(end->next!=NULL)
        {
            end=end->next;
        }
        while(curr->data!=n2)
        {
            curr=curr->next;
        }
        end->next=curr;
    }
int main()
{
    linkedlist obj;
    int pos;
    int n,n1,i,ch=0,n2;
    cout<<"enter the size of the linked list "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>n1;
        obj.insertatend(n1);
    }
    cin>>ch;
    if(ch==1)
    {
        cin>>n2;
        obj.setcycle(n2);
    }
    obj.check();
}