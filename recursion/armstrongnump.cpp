#include<iostream>
#include<math.h>
using namespace std;
int sum = 0;
int orderFind(int num){
    if(num == 0){
        return 0;
    }
    return 1 + orderFind(num/10);
}
int cubicSum(int num,int order){
    if(num == 0){
        return 0;
    }
    return pow(num%10,order) + cubicSum(num/10,order);
}
int main(){
    int n;
    cin>>n;
    int order = orderFind(n);

    cout<<(cubicSum(n,order) == n)<<"\n";

    //upto n cubic Sum

    for(int i = 0 ; i <= n ; i++ ){
        int order = orderFind(i);
        if(cubicSum(i,order) == i){
            cout<<i << "is an armstrong number"<<"\n";
        }
    }
}