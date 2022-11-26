//program to check if a number is binary number or not
#include <iostream>
using namespace std;
 
int binary(int x, int *c){
    int res=0;
    while(x){
        if(x%2==0)
            res=res*10;
        else{
            res=1+res*10;
            (*c)++;
        }
        x/=2;
    }
    return res;
}
 
int main(){
    int a, bi, count=0;
    cout<<"INPUT:\n";
    cout<<"enter number:\n";
    cin>>a;
    bi=binary(a, &count);
    cout<<"OUTPUT:\n";
    if(count%2==0)
        cout<<"EVIL number";
    else
        cout<<"not EVIL number";
    return 0;
}
