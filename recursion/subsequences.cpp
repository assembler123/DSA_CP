#include<iostream>
using namespace std;
void subsequence(string s,string op){
    if(s.empty()){
        cout<< op<<",";
        return;
    }
    subsequence(s.substr(1),op);
    subsequence(s.substr(1),op + s[0]);
}
int main(){
    string s1;
    cin>>s1;
    subsequence(s1,"");
    return 0;
}