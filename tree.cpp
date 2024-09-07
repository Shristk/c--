// DIRECT INSERTION
// #include<iostream>
// using namespace std;
// class treenode{
//     public:
//     int data;
//     treenode* left;
//     treenode* right;
//     treenode(int x){
//         this->data=x;
//         this->left=nullptr;
//         this->right=nullptr;
//     }
// };
// void inorder(treenode *root){
//     if(root==nullptr)
//     return;
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// int main()
// {
//     treenode* root= new treenode(10);
//     root->left=new treenode(20);
//     root->right = new treenode(30);
//     root->left->left=new treenode(40);
//     root->left->right=new treenode(50);
//     inorder(root);
// }

// NODE INSERTION IN BINARY TREE
// #include<iostream>
// using namespace std;
// #include<queue>
// class treenode{
//     public:
//     int data;
//     treenode* left;
//     treenode* right;
//     treenode(int value){
//         data = value;
//         left=NULL;
//         right=NULL;
//     }
// };
// void inorder(treenode* root){
//     if(root!=NULL)
//     {
//         inorder(root->left);
//     }
// }
// int main()
// {
//     treenode* root;
//     int x,y,z;
//     cout<<"enter the root data: ";
//     cin>>x;
//     root= new treenode(x);
//     queue<treenode*>q;
//     q.push(root);
//     while(!q.empty())
//     {
//         treenode* temp=q.front();
//         q.pop();
//         cout<<"enter the left data: ";
//         cin>>y;
//         if(y!=-1)
//         {
//             temp->left=new treenode(y);
//             q.push(temp->left);
//         }
//         cout<<"enter the right data: ";
//         if(z!=-1)
//         {
//             temp->right=new treenode(z);
//             q.push(temp->right);
//         }        
//     }
// }




// #include <iostream>
// #include <queue>
// using namespace std;
// template <typename T>
// class Node {
// public:
//     T data;  
//     Node* left;
//     Node* right;  
// //Constructor to initialize node with value
//     Node(T value) : data(value), left(nullptr), right(nullptr) {}
// };
// // Template class for a Binary Tree
// template <typename T>
// class BinaryTree {
// private:
//     // Pointer to the root of the tree
//     Node<T>* root;  
//      public:
//     // Constructor to initialize the tree
//     BinaryTree() : root(nullptr) {}
//     // Function to insert a node in the binary tree 
//      void inorderRecursive(Node<T>* node) {
//         if (node != nullptr) {
//             inorderRecursive(node->left);
//             cout << node->data << " ";
//             inorderRecursive(node->right);
//         }
//     }
//     void insertNode(T value) {
//         Node<T>* newNode = new Node<T>(value);
//         if (root == nullptr) {
//             root = newNode;
//             return;
//         }
//         queue<Node<T>*> q;
//         q.push(root);
//         while (!q.empty()) {
//             Node<T>* current = q.front();
//             q.pop();
//             if (current->left == nullptr) {
//                 current->left = newNode;
//                 return;
//             } else {
//                 q.push(current->left);
//             }
//             if (current->right == nullptr) {
//                 current->right = newNode;
//                 return;
//             } else {
//                 q.push(current->right);
//             }
//         }
//     }
//      void inorder() {
//         inorderRecursive(root);
//         cout << endl;
// }
// };
// int main() {
//     BinaryTree<int> tree;
//     // Insert the nodes into the tree
//     tree.insertNode(1);
//     tree.insertNode(2);
//     tree.insertNode(3);
//     tree.insertNode(4);
//     tree.insertNode(5);
//     tree.insertNode(6);
//     cout << "Inorder traversal: ";
//     tree.inorder();
// return 0;
// }








