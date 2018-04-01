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
	//	cout<<"Enter the element";
		cin>>ele;
		if(top==size-1)
		cout<<"stack overflow";
		else
		{	a[++top]=ele;
			cout<<endl<<a[top]<<" inserted";
		}
	}
	
	void pop()
	{
		if(top==-1)
		{cout<<"empty stack";
		return;
		}
		cout<<endl<<a[top]<<" deleted";
		a[top--]=0;
	}
		
	void display()
	{
		if(top==-1)
		{cout<<"empty stack";
		return;
		}
		cout<<"\nStack elements are : ";
		for(int i=0;i<=top;i++)
		cout<<a[i]<<" ";
		cout<<endl;
	}
}ob;
int exeunt()
{
	return 5;
}
int chu()
{
	int i,j=1;
	/*	cout<<" 1 to push"<<endl;
	  	cout<<" 2 to pop"<<endl;
	   	cout<<" 3 to display"<<endl;
	   	cout<<" 4 to exit"<<endl;*/
	cin>>i;
	switch(i)
	{	case 1:ob.push();break;
	  	case 2:ob.pop();break;
	   	case 3:ob.display();break;
	   	case 4:j=exeunt();break;
	}
	return j;
	  
}

int main() 
{
	int j=1;
	while(j!=5)
		j=chu();
	return 0;
}
