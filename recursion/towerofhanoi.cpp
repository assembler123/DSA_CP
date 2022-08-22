#include<iostream>
using namespace std;
void towerofhanoi(int n,char s, char a, char d){
    if(n == 1){
        cout<<s<<" "<<d << "\n";
        return;
    }
    towerofhanoi(n-1,s,d,a);
    cout<<s<<" "<<d<<"\n";
    towerofhanoi(n-1,a,s,d);
}
int main(){
    int n; 
    cin>>n;
    cout<<"For "<<n<<"\n";
    towerofhanoi(n,'a','b','c');
    return 0;
}