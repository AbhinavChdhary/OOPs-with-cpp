//Abhinav Choudhary B.tech CST (49)
#include <iostream>
 
using namespace std;
 
string changeWord(string st){
	char prev='\0';
	string result="";
	for(int i=0; i<st.length(); i++){
    	char ch=st.at(i);
    	if(ch!=prev)
        	result+=ch;
    	prev=ch;
	}
	return result;
}
 
void catchWord(string &word, string &res){
	if(word!="" && word!=" "){
    	res+=changeWord(word)+' ';
    	word="";
	}
}
 
int main(){
	cout<<"INPUT/OUTPUT\nAbhinav Choudhary\nB.tech CST 49\n";
	string st, res="";
	cout<<"INPUT:\n";
	getline(cin, st);
    
	st+= ' ';
	string word="";
    
	for(int i=0;i<st.length();i++){
    	if(st.at(i)==' '){
        	catchWord(word, res);
    	}
    	else{
        	word+=st.at(i);
    	}
	}
	cout<<"OUTPUT:\n";
	cout<<res<<"\n";
	return 0;
}
