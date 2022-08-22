#include<iostream>
using namespace std;
class link {
    public:
    int data;
    link* next;
};
link* LinkedList(int arr[],int n , int i){
    if(i>=n){
        return NULL;
    }
    link* Temp = new link();
    Temp->data = arr[i];
    Temp->next = LinkedList(arr,n,i+1);
}
void printList(link* start){
    if(start == NULL)
        return;
    cout<<start->data<<"\t";
    printList(start->next);
}
int main(){
    int a[] = {1,2,3,4,5,6};
    link* start;
    start = LinkedList(a,6,0);
    printList(start);
}