#include<iostream>
using namespace std;
#define size 100
class Stack{
    private:
    int top;
    int arr[size];
    public:
        Stack(){
            top=-1;
            int arr[size];
        }
        void push(int val){
            if(top>(size-1)){
                cout<<"Stack Overflow Occured";
            }
            else{
                top++;
                arr[top]=val;
            }
        }
        int pop(){
            int item;
            if(top<0){
                
                cout<<"Stack Overflowed Occur";
            }
            else{
                item=arr[top];
                top--;
                return item;
            }
        }
        int peek(){
            if(top<(size-1) && top>=0){
                int x=arr[top];
                return x;
            }
            else{
                cout<<"Stack is Empty";
            }
        }
        void EvaluatePostFix(char postfix[]){
            int i;
            char ch;
            int val;
            int A,B;
            for(int i=0;postfix[i]!=')';i++){
                ch=postfix[i];
                if(isdigit(ch)){
                    push(ch-'0');
                }
                else if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
                    A=pop();
                    B=pop();
                    switch(ch){
                        case '*':
                        val=B*A;
                        break;
                        case '-':
                        val=B-A;
                        break;
                        case '/':
                        val=B/A;
                        break;
                        case '+':
                        val=B+A;
                        break;
                    }
                    push(val);
                }
            }
            cout<<"The result of the expression is: "<<pop();
        }
        void isEmpty(){
            if(top==-1){
                cout<<"Stack is Empty ";
            }
        }
        void display(){
            if(top!=-1){
                for(int i=top;i>-1;i--){
                    cout<<arr[i]<<" ";
                }
            }
        }
};
int main(){
    Stack s1;
    int i;
    char ch[size];
    cout<<"Enter the expression inside the character array: ";
    for(int i=0;i<=size;i++){
        cin>>ch[i];
        if(ch[i]==')'){
            break;
        }
    }
    s1.EvaluatePostFix(ch);
    return 0;
}