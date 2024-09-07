#include <iostream>
#include<bits\stdc++.h>
using namespace std;

class Treenode{
    public:
    int data;
    Treenode *left;
    Treenode *right;
    Treenode(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void inorder(Treenode *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    else{
        return;
    }
}
void bst(Treenode*root,Treenode *temp){
        if(root->data>temp->data){
            if(root->left!=NULL){
                bst(root->left,temp);
            }
            else{
                root->left=temp;
            }
        }
        else{
            if(root->right!=NULL){
                bst(root->right,temp);
            }
            else{
                root->right=temp;
            }
        }
}
void bst_delete(Treenode *root,int num){
    Treenode *curr,*prev;
    curr=root;
    while(curr!=NULL){
        if(curr->data==num){
            break;
        }
        else{
            prev=curr;
            if(curr->data>num){
                curr=curr->left;
            }
            else{
                curr=curr->right;
            }
        }
    }
        //case-1 both child NULL
        if(curr->left==NULL && curr->right==NULL){
            if(prev->left==curr){
                prev->left=NULL;
            }
            else{
                prev->right=NULL;
            }
        }
        // case-2 node having one child
        if(curr->left==NULL && curr->right!=NULL){
            if(prev->left==curr){
                prev->left=curr->right;
            }
            else{
                prev->right=curr->right;
            }
        }
        if(curr->left!=NULL && curr->right==NULL){
            if(prev->left==curr){
                prev->left=curr->left;
            }
            else{
                prev->right=curr->left;
            }
        }
        //case-3 node having both child
        Treenode *x;
        if(curr->left!=NULL && curr->right!=NULL){
            x=curr->right;
            if(x->left==NULL){
                curr->data=x->data;
                curr->right=NULL;
                delete x;
            }
            else if(x->left!=NULL){
                Treenode *p1,*y;
                p1=x;
                y=x->left;
                while(y->left!=NULL){
                    p1=y;
                    y=y->left;
                }
                curr->data=y->data;
                p1->left=NULL;
                delete y;
            }
        }

    }
int main(){
    Treenode *root=NULL;
    int x;
    int ch;
    while(1){
        cout<<"enter the data:";
        cin>>x; 
        if(root==NULL){
            root=new Treenode(x);
        }
        else{
        Treenode *temp=new Treenode(x);
        bst(root,temp);
        }
        cout<<"enter do u want to continue:";
        cin>>ch;
        if(ch==1){
            break;
        }
    }
    inorder(root);
    cout<<endl;
    bst_delete(root,100);
    inorder(root);
    

}