#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        Node* prev;
    Node()
    {
        data=0;
        next=NULL;
        prev=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
    class linkedlist{
        public:
        Node *head;
        linkedlist(){
            head=NULL;
        }
        void insert(int data);
        void display();
    };
       void linkedlist::insert(int data)
    {
       Node* newnode = new Node(data);
        if(head==NULL)
        {
            head = newnode;
            return;
        }
        Node* temp = head;
        temp = temp->next;
        while(temp->next!=head)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next=head;
    }
    void linkedlist:: display(){
        Node* temp = head;
        if(head==NULL){
            cout<<"list empty"<<endl;
        }
        temp=temp->next;
        while(temp!=head)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
    int main(){
        linkedlist obj;
       char ch='y';
    int n1;
    // cout<<"enter the first value in the linked list"<<endl;
    while(ch=='y')
    {
        cout<<"enter the element data"<<endl;
        cin>>n1;
        obj.insert(n1);
        cout<<"press y if u want to continue insertion"<<endl;
        cin>>ch;
    }
        obj.display();
    }