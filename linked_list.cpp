//INSERTION
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//         int data;
//         Node *next;
//     Node()
//     {
//         data=0;
//         next=NULL;
//     }
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
//     class linkedlist{
//         public:
//         Node *head;
//         linkedlist(){
//             head=NULL;
//         }
//         void insertatend(int data);
//         void insertatbeginning(int data);
//         void insertatposition(int data,int pos);
//         void display();
//     };
//     void linkedlist:: insertatend(int data){
//         Node* newnode=new Node(data);
//         if(head==NULL)
//         {
//             head = newnode;
//             return;
//         }
//         Node* temp = head;
//         while(temp->next!=NULL)
//         {
//             temp = temp->next;
//         }
//         temp->next = newnode;
//     }
//     void linkedlist:: display(){
//         Node* temp = head;
//         if(head==NULL){
//             cout<<"list empty"<<endl;
//         }
//         while(temp!=NULL)
//         {
//             cout<<temp->data<<" ";
//             temp = temp->next;
//         }
//     }
//     void linkedlist:: insertatbeginning(int data){
//         Node* newnode=new Node(data);
//         if(head==NULL)
//         {
//             head = newnode;
//             return;
//         } 
//         else{
//             newnode->next=head;
//             head=newnode;
//         }
//     }
//     void linkedlist:: insertatposition(int data,int pos){
//         Node* newnode=new Node(data);
//         Node* temp =head;
//         Node* temp1;
//         for(int i=0;i<pos-1;i++)
//         {
//             temp=temp->next;
//         }
//         temp1=temp->next;
//         temp->next=newnode;
//         newnode->next=temp1;
//     }
// int main()
// {
//     linkedlist obj;
//     int pos;
//     int n,n1;
//     cout<<"number of nodes"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>n1;
//         obj.insertatend(n1);
//     }
//     obj.insertatbeginning(400); 
//     // obj.insertatposition(40,2);
//     obj.display();
// }





// DELETION
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//         int data;
//         Node *next;
//     Node()
//     {
//         data=0;
//         next=NULL;
//     }
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
//     class linkedlist{
//         public:
//         Node *head;
//         linkedlist(){
//             head=NULL;
//         }
//         void insertatend(int data);
//         void deleteatend();
//         void insertatbeginning(int data);
//         void deleteatbeginning();
//         void insertatposition(int data,int pos);
//         void deleteatposition(int pos);
//         void display();
//     };
//     void linkedlist:: insertatend(int data){
//         Node* newnode=new Node(data);
//         if(head==NULL)
//         {
//             head = newnode;
//             return;
//         }
//         Node* temp = head;
//         while(temp->next!=NULL)
//         {
//             temp = temp->next;
//         }
//         temp->next = newnode;
//     }
//     void linkedlist:: display(){
//         Node* temp = head;
//         if(head==NULL){
//             cout<<"list empty"<<endl;
//         }
//         while(temp!=NULL)
//         {
//             cout<<temp->data<<" ";
//             temp = temp->next;
//         }
//     }
//     void linkedlist:: deleteatbeginning()
//     {
//         head  = head->next;
//     }
//     void linkedlist:: deleteatend()
//     {
//         Node* temp = head;
//         Node* prev = temp;
//         while(temp->next!=NULL)
//         {
//             prev =temp;
//             temp = temp->next;
//         }
//         prev->next=NULL;
//     }
//     void linkedlist:: deleteatposition(int pos)
//     {
//         Node* temp = head;
//         Node* prev = temp;
//         for(int i=0;i<pos;i++)
//         {
//             prev = temp;
//             temp=temp->next;
//         }
//         prev->next = temp->next;
//     }
// int main()
// {
//     linkedlist obj;
//     int pos;
//     int n,n1;
//     cout<<"number of nodes"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>n1;
//         obj.insertatend(n1);
//     }
//     // obj.deleteatbeginning();
//     obj.deleteatposition(3);
//     // obj.deleteatend();
//     obj.display();
// }


// #include<iostream>
// using namespace std;
// class Node{
//     public:
//         int data;
//         Node *next;
//     Node()
//     {
//         data=0;
//         next=NULL;
//     }
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
//     class linkedlist{
//         public:
//         Node *head;
//         linkedlist(){
//             head=NULL;
//         }
//         void insertatend(int data);
//         void deleteatend();
//         void insertatbeginning(int data);
//         void deleteatbeginning();
//         void insertatposition(int data,int pos);
//         void deleteatposition(int pos);
//         void reverse();
//         void display();
//     };
//     void linkedlist:: insertatend(int data){
//         Node* newnode=new Node(data);
//         if(head==NULL)
//         {
//             head = newnode;
//             return;
//         }
//         Node* temp = head;
//         while(temp->next!=NULL)
//         {
//             temp = temp->next;
//         }
//         temp->next = newnode;
//     }
//     void linkedlist:: display(){
//         Node* temp = head;
//         if(head==NULL){
//             cout<<"list empty"<<endl;
//         }
//         while(temp!=NULL)
//         {
//             cout<<temp->data<<" ";
//             temp = temp->next;
//         }
//     }
//     void linkedlist::reverse(){
//         Node* current = head;
//         Node* future=NULL;
//         Node* prev=NULL;
//         while(current)
//         {
//             future=current->next;
//             current->next=prev;
//             prev=current;
//             current=future;
//         }
//         head=prev;
//     }
//     void linkedlist:: insertatbeginning(int data){
//         Node* newnode=new Node(data);
//         if(head==NULL)
//         {
//             head = newnode;
//             return;
//         } 
//         else{
//             newnode->next=head;
//             head=newnode;
//         }
//     }
// int main()
// {
//     linkedlist obj;
//     int pos;
//     char ch='y';
//     int n1;
//     // cout<<"enter the first value in the linked list"<<endl;
//     while(ch=='y')
//     {
//         cout<<"enter the element data"<<endl;
//         cin>>n1;
//         obj.insertatend(n1);
//         cout<<"press y if u want to continue insertion"<<endl;
//         cin>>ch;
//     }
//     cout<<"original linked list"<<endl;
//     obj.display();
//     cout<<endl;
//     obj.reverse();
//     cout<<"reversed linked list"<<endl;
//     obj.display();
// }


