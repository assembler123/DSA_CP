#include<iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> q;
    cout<<"Queue Implementation\n";
    cout<<"\nis queue empty"<<q.empty()<<"\n";
    cout<<q.front();
    q.push(10);
    cout<<"\nis queue empty"<<q.empty()<<"\n";
    cout<<q.front();
    q.pop();
    q.push(20);
    cout<<q.front();
    q.pop();
    q.push(30);
    cout<<q.front();
    q.pop();
    cout<<"\nis queue empty"<<q.empty()<<"\n";
    return 0;
    
}