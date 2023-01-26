void Eval(char posfix[]){
    int i;
    char ch;
    int val;
    int A;
    int B;
    for(int i=0;posfix[i]!=')';i++){
        ch=posfix[i];
        if(isdigit(ch))
        push(ch-'0');
        else if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
            int A=pop();
            int B=pop();
            switch (ch){
                case '+':
                val=B+A;
                break;
                case '-':
                val=B-A;
                break;
                case '/':
                val=B/A;
                break;
                case '*':
                val=B*A;
                break;
            }
            push val;
        }
    }
    cout<<"Result is"<<pop();
}
int main(){
    stack s1;
    int arr[size];
    int i;
    for(int i=0;i<size;i++){
        cin>>ch[i];
        if(ch==')')
        break;
    }
    s1.Eval(arr);
}