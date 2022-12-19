#include <iostream>
 
using namespace std;
 
bool checkComp(int x){
    for(int i=2;i<=x/2;i++){
        if(x%i==0)
            return true;
    }
    return false;
}
 
int smallest(int x){
    int res=x;
    while(x!=0){
        if(x%10<res)
            res=x%10;
        x/=10;
    }
    return res;
}
 
int main(){
    int a, c;
    cout<<"INPUT:\n";
    cout<<"enter choice 1 for composite and 2 for smallest digit\n";
    cin>>c;
    cout<<"enter number:\n";
    cin>>a;
    cout<<"OUTPUT:\n";
    switch(c){
        case 1://to check composite numbers
            if(checkComp(a))
                cout<<"yes composite\n";
            else
                cout<<"not composite\n";
            break;
        case 2://to print smallest digit
            cout<<"smallest digit is:"<<smallest(a);
            break;
        default:
            cout<<"wrong choice";
    }
        
    return 0;
}
