#include<iostream>
using namespace std;
int SumOfDigits(int num){
    if(num == 0){
        return 0;
    }
    return num%10 + SumOfDigits(num/10);
}
int main()
{
    int n;
    cin>>n;
    cout<<SumOfDigits(n);
}