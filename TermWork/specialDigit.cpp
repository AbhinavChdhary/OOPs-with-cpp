//Abhinav Choudhary B.tech CST (49)
#include <iostream>
 
using namespace std;
 
int main(){
    cout<<"INPUT/OUTPUT\nAbhinav Choudhary\nB.tech CST 49\n";
    int x, copy;
    cout<<"INPUT:\n";
    cin>>x;
    copy=x;
    int sum=0, pro=1;
    
    while(copy!=0){
        sum += copy%10;
        pro *= copy%10;
        copy/=10;
    }
    cout<<"OUTPUT:\n";
    if(sum+pro==x)
        cout<<"Special 2-digit number\n";
    else
        cout<<"Not a Special 2-digit number\n";
        
    return 0;
}