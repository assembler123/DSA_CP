#include<iostream>
#include<math.h>
using namespace std;
int sum = 0;
int reverse(int num){
    if(num == 0){
        return 0;
    
    }
    sum = sum*10 + (num%10);
    reverse(num/10);
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<reverse(n);
}