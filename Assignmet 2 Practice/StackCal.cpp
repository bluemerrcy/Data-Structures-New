#include<iostream>
using namespace std;
#define size 100
class stack{
	private:
	int top;
	int arr[size];
	public:	
		// Random initializer also known as constructor
		stack(){
			top = -1;
			int arr[size];
		}
		void push(int val){
			if(top > (size-1)){
				cout<<"stack overflow";
			}
			else{
				arr[++top] = val;
			}
		}
		int pop()
{
    int item;
    if (top < 0) {
        printf("stack under flow");
	}
	else {
        item = arr[top];
        top = top - 1;
        return item;
    }
}	
		void peek(){
			if(top < (size -1) && top >= 0){
				int x = arr[top];
				cout<<x;
			}
			else{
				cout<<"stack is empty";
			}
		}
	void EvaluatePostfix(char postfix[])
{
    int i;
    char ch;
    int val;
    int A, B;
    for (i = 0; postfix[i] != ')'; i++) {
        ch = postfix[i];
        if (isdigit(ch)) {
            push(ch - '0');
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            A = pop();
            B = pop();
            switch (ch)
            {
            case '*':
                val = B * A;
                break;
            case '/':
                val = B / A;
                break;
            case '+':
                val = B + A;
                break;
            case '-':
                val = B - A;
                break;
            }
            push(val);
        }
    }
    cout<<"result of expression "<<pop();
}
		bool isempty(){	
			if(top == -1){
				cout<<"stack is empty";
			}
		}
		void display(){
			if(top != -1){
				for(int i = top; i>-1 ;i--){
					cout<<arr[i]<<" ";
				}
			}
		}
};
int main()
{
	stack s1;
	int i;
    char ch[size];
    cout<<"enter the expression inside (---) ";
    for (i = 0; i <= size - 1; i++) {
        cin>>ch[i];
        if (ch[i] == ')') 
        {
            break;
        } 
    }
    s1.EvaluatePostfix(ch);
    return 0;
}