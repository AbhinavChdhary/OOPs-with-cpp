#include <iostream>
using namespace std;

int main(){
    string st;

    cout<<"Enter: ";
    getline(cin>>ws, st);

    for (size_t i = 0; i < st.length(); i++)
    {
        swap(st.at(i), st.at(st.length()-1-i));
    }
    cout<<"reversed word: "<<st<<endl;
    //to count duplicates
    string copy = st;
    for (size_t i = 0; i < copy.length(); i++)
    {
        char ch = copy.at(i);
        int count = 1;
        for(size_t j = i+1; j < copy.length(); j++){
            if(copy.at(j)==ch && ch!='\0'){
                cout<<copy.at(j);
                copy.at(j) = '\0';
                count++;
            }
        }
        if(ch!='\0')
            cout<<"count of "<<ch<<" = "<<count<<endl;
    }
    
    return 0;
}