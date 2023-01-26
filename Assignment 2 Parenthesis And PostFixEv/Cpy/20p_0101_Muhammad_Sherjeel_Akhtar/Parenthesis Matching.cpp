#include<iostream>

#include<string.h>    

using namespace std;

class stack
{

		char *ch,*arr;	

		int top=-1,size;
	
	public :

//	Random initializer

		stack() 

{

	cout<<"enter size"<<endl;

	cin>>size;

	ch=new char[size];

	cout<<"Enter the expression=";

	cin>>ch;

	size=strlen(ch);

	arr=new char[size]; 

}

	 ~stack() 

{

	delete[] ch;

	delete [] arr;

}
		
void push(char c) 

{

	arr[++top]=c;

}

char pop() 

{

	return(arr[top--]);

}

int cal() 

{

	for (int i=0;i<size;i++) 

	{ 

		if (ch[i]=='('||ch[i]=='['||ch[i]=='{') 

		{ 

			push(ch[i]);	

			continue; 

		}

		if(top==-1) 

			return 2;	

		if(ch[i]==')')

		{

			if (arr[top]=='{' || arr[top]=='[') 

				return 0;

			pop(); 

			break; 

		}

		if(ch[i]=='}')

		{

			if (arr[top]=='(' || arr[top]=='[') 

				return 0;

			pop(); 

			break; 

		}

		if(ch[i]==']')

		{

			if (arr[top]=='(' || arr[top]=='{') 

				return 0;	

			pop(); 

			break; 

		}

	}

	return (1); 

}

};

int main()

{

	stack st; 

	int res=st.cal();

	if(res==1)

		cout<<" Balanced Parantheses";

	else if(res==2)

		cout<<" No parantheses";

	else

		cout<<" Unbalanced Parantheses";

	return 0;

}
