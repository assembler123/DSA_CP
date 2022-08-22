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
void treeReverse(Node* root){
    if(root == NULL)return;
    Node* temp = root->left;
    root->left = root->right;
    root->right = temp;
    treeReverse(root->left);
    treeReverse(root->right);
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
    cout<<root->data<<"\n";
    cout<<"Without Reversal\n";
    levelorder(root);
    cout<<"\nAfter Reversal\n";
    treeReverse(root);
    levelorder(root);
    // cout<<"root -->>"<<root->data;
}