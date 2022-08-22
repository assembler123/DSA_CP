#include<iostream>
using namespace std;
int subsequence(string s,string op){
    if(s.empty()){
        cout<< op<<",";
        return 1;
    }
    return subsequence(s.substr(1),op) + subsequence(s.substr(1),op + s[0]);
}
int main(){
    string s1;
    cin>>s1;
    cout<<subsequence(s1,"");
    return 0;
}