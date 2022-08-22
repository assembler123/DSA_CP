#include<iostream>
#include <queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left = NULL;
    Node* right = NULL;
    Node(int a){
        data = a;
    }
};
Node* treeBuild(int arr[],int n,int i){
    if(i>=n){
        return NULL;
    }
    Node* temp = new Node(arr[i]);
    temp->left = treeBuild(arr,n,(2*i +1));
    temp->right = treeBuild(arr,n,(2*i +2));
    return temp;
}
void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<"\t";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<"\t";
    inorder(root->right);
}
void postorder(Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"\t";
}
void levelorder(Node* root){
    queue<Node*> q;
    q.push(root);
    while (q.empty() != 1){
        cout<<q.front()->data<<"\t";
        if((q.front())->left != NULL){
            q.push(q.front()->left);
        }
        if((q.front())->right != NULL){
            q.push(q.front()->right);
        }
        q.pop();
    }
}
int main(){
    int n;
    cin>>n;
    int *a = new int(n);
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    Node* root;
    root = treeBuild(a,n,0);
    // cout<<"root -->>"<<root->data;
    cout<<"\n";
    cout<<"preorder->";
    preorder(root);
    cout<<"\n";
    cout<<"inorder->";
    inorder(root);
    cout<<"\n";
    cout<<"postorder->";
    postorder(root);
    cout<<"\n";
    cout<<"levelorder->";
    levelorder(root);

    // Node* root = new Node(n);
    // cout<<root->data;
    // Node* temp = root;
    // for(int i = 1 ; i< n ; i++){
        
    // }
    return 0;
}