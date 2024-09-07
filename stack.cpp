// //STACK IMPLEMENTATIO USING STL STACK
// #include <iostream>
// #include <stack>
// using namespace std;
// int main() {
//     stack<int> st;
//     st.push(100);
//     st.push(200);
//     st.push(300);
//     cout<<st.empty()<<endl;
//     cout << st.top()<<endl;
//     cout<<st.size()<<endl;
//     st.pop();
//     cout << st.top()<<endl;
//     cout<<st.size()<<endl;
//     st.pop();
//     cout<<st.empty()<<endl;
//     st.pop();
//     cout<<st.empty();
//     return 0;
// }
// STACK IMPLEMENTATION USING ARRAY
// #include <iostream>
// using namespace std;
// class Stack {
//     // Pointer to an array
//     int* arr;
//     int top;
//     int capacity;
// public:
//     // Constructor
//     Stack(int size)
//     {
//         arr = new int[size];
//         capacity = size;
//         top = -1;
//     }

//     // Destructor to deallocate memory
//     ~Stack() { delete[] arr; }
   
//     void push(int x)
//     {
//         if (isFull()) {
//             cout << "Overflow\n";
//             return;
//         }
//         arr[++top] = x;
//     }
//     int pop()
//     {
     
//         if (isEmpty()) {
//             cout << "Underflow\n";
//             return -1;
//         }
//         return arr[top--];
//     }
//     int peek()
//     {
//         if (!isEmpty())
//             return arr[top];
//         else
//             return -1;
//     }

//     bool isEmpty() { return top == -1; }
//     bool isFull() { return top == capacity - 1; }
// };
// int main()
// {
//     Stack stack(100);
//     stack.push(200);
//     stack.push(300);
//     stack.push(400);

  
//     cout << "Peek:" << stack.peek() << endl;
    
//     cout << "Pop:" << stack.pop() << endl;
 
//     cout << "Top after Pop:" << stack.peek() << endl;

  
//     stack.pop();
//     stack.pop();

//     if (stack.isEmpty()) {
//         cout << "stack empty" << endl;
//     }
//     else {
//         cout << "Stack not empty" << endl;
//     }
// }

//STACK IMPLEMENTAITON USING LINKED LIST
//1.creating a linked list list by inserting node at the beginning 
//2.always delete or pop head


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
        void push(int data);
        void pop();
        void peek();
    };
        void linkedlist:: push(int data){
        Node* newnode=new Node(data);
        if(head==NULL)
        {
            head = newnode;
            return;
        } 
        else{
            newnode->next=head;
            head=newnode;
        }
    };
     void linkedlist:: pop()
    {
        if(head==NULL)
        {
            cout<<"undeflow"<<endl;
        }
        head  = head->next;
    };
    void linkedlist::peek()
    {
        if(head==NULL)
        {
            cout<<"underflow"<<endl;
        }
        else{
        cout<<"the top value of the stack is ";
        cout<<head->data<<endl;
        }
    }
    int main()
    {
        linkedlist st;
        int n,n1;
        char c;
        // cout<<"choose ur operation on the stack :"<<endl;
        // cout<<"1.push"<<endl;
        // cout<<"2.pop"<<endl;
        // cout<<"3.peek"<<endl;
        c='y';
        while(c == 'y')
        {
        cout<<"choose ur operation on the stack :"<<endl;
        cout<<"1.push"<<endl;
        cout<<"2.pop"<<endl;
        cout<<"3.peek"<<endl;
        cin>>n;
        while(n!=1 && n!=2 && n!=3)
        {
        cout<<"choose a valid option "<<endl;
        cout<<"choose ur operation on the stack :"<<endl;
        cout<<"1.push"<<endl;
        cout<<"2.pop"<<endl;
        cout<<"3.peek"<<endl;
        }
        if(n==1)
        {
            cout<<"enter the element u want to push"<<endl;
            cin>>n1;
            st.push(n1);
        }
        if(n==2)
        {
            st.pop();
            cout<<"element popped out of the stack"<<endl;
        }
        if(n==3)
        {
            st.peek();
            cout<<endl;
        }
        cout<<"to continue press y"<<endl;
        cin>>c;
        }
    }


