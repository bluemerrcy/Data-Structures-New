#include<iostream>
#include<string.h>
using namespace std;
class stack{
    char*ch,*arr;
    int top=-1,size;
    public:
    stack(){
        cout<<"Enter the size: "<<endl;
        cin>>size;
        ch=new char[size];
        cout<<"Enter the expression: ";
        cin>>ch;
        size=strlen(ch);
        arr=new char[size];
    }
    ~stack(){
        delete[] ch;
        delete[] arr;
    }
    void push(char c){
        if(top<size-1){
            cout<<"Stack Overflow Occured: ";
            return;
        }
        top++;
        arr[top]=c;
    }
    char pop(){
        if(top==-1){
            cout<<"Stack Underflow Occured: " ;
        }
    }
    int cal(){
        for(int i=0;i<size;i++){
            if(ch[i]=='('||ch[i]=='['||ch[i]=='{'){
                push(ch[i]);
                continue;
            }
            if(top==-1)
            return 2;
            if(ch[i]==')'){
                if(arr[top]=='{'||arr[top]=='[')
                return 0;
                pop();
                break;
            }
            if(ch[i]=='}'){
                if(arr[top]=='('||arr[top]=='[')
                return 0;
                pop();
                break;
            }
            if(ch[i]==']'){
                if(arr[top]=='('||arr[top]=='{')
                return 0;
            pop();
            break;
            }
            }
            return (1);
    }
};
int main(){
    stack st;
    int res=st.cal();
    if(res==1){
        cout<<"Balanced Parenthesis. ";
    }
    else if(res==2){
        cout<<"No Parenthesis. ";
    }
    else{
        cout<<"Unbalanced Paranthesis";
        return;
    }
}