
#include <iostream>
#define size 10
using namespace std;
int a[size];
class stack
{
	int top;
	public:
	stack()
	{
		top=-1;
	}
	
	void push()
	{
		int ele;
		cout<<"Enter the element";
		cin>>ele;
		if(top==size-1)
		cout<<"stack overflow";
		else
		a[++top]=ele;
	}
	
	void pop()
	{
		if(top==-1)
		{cout<<"empty stack";
		return;
		}
		cout<<a[top]<<" deleted";
		a[top--]=0;
	}
		
	void display()
	{
		if(top==-1)
		{cout<<"empty stack";
		return;
		}
		for(int i=0;i<top;i++)
		cout<<a[i]<<" ";
	}
}ob;
int exeunt()
{
	return 5;
}
void chu()
{
	int i,j=1;
		cout<<" 1 to push";
	  	cout<<" 2 to pop";
	   	cout<<" 3 to display";
	   	cout<<"4 to exit";
	  cin>>i;
	switch(i)
	{	case 1:ob.push();break;
	  	case 2:ob.pop();break;
	   	case 3:ob.display();break;
	   	case 4:j=exeunt();
	}
	return j;
	  
}

int main() 
{
while(j!=5)
	chu();
	return 0;
}
