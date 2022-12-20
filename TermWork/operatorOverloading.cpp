//Abhinav Choudhary B.tech CST (49)
#include <iostream>
using namespace std;

class WithFriend
{
	int a;

public:
	WithFriend(int a = 0)
	{
    	this->a = a;
	}
	//unary minus
	friend void operator-(WithFriend &ob){
    	ob.a = -(ob.a);
	}
	//prefix increment
	friend void operator++(WithFriend &ob)
	{
    	++ob.a;
	}
	//postfix increment
	friend void operator++(WithFriend &ob ,int)
	{
    	ob.a++;
	}
	//prefix decrement
	friend void operator--(WithFriend &ob)
	{
    	--ob.a;
	}
	//postfix decrement
	friend void operator--(WithFriend &ob, int a)
	{
    	ob.a--;
	}
	void display()
	{
    	cout << a << endl;
	}
};
class WithOUTFriend
{
	int a;

public:
	WithOUTFriend(int a = 0)
	{
    	this->a = a;
	}
	//unary minus
	void operator-(){
    	a = -a;
	}
	//prefix increment
	void operator++()
	{
    	++a;
	}
	//postfix increment
	void operator++(int)
	{
    	a++;
	}
	//prefix decrement
	void operator--()
	{
    	--a;
	}
	//postfix decrement
	void operator--(int)
	{
    	a--;
	}
	void display()
	{
    	cout << a << endl;
	}
};

int main()
{
    cout<<"INPUT/OUTPUT\nAbhinav Choudhary\nB.tech CST 49\n";
	cout<<"With friend:\n";
	WithFriend fb(10);
	++fb;
	fb.display();
	fb++;
	fb.display();
	--fb;
	fb.display();
	fb--;
	fb.display();
	-fb;
	fb.display();

	cout<<"With OUT friend:\n";
	WithOUTFriend wfb(10);
	++wfb;
	wfb.display();
	wfb++;
	wfb.display();
	--wfb;
	wfb.display();
	wfb--;
	wfb.display();
	-wfb;
	wfb.display();

	return 0;
}
