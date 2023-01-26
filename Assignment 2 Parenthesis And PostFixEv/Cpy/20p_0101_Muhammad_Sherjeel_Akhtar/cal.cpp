int cal(){
    for(int i=0;i<size;i++){
        if(arr[i]=='{'||arr[i]=='['||arr[i]=='(')
        push(arr[ch]);
        continue;
        if(top==-1)
        return 2;
        if(char[i]==')'){
            if(arr[top]=='{'||arr[top]=='[')
            return 0;
        }
        pop();
        return;
        if(char[i]=='}')
        if(arr[top]=='('||arr[top]=='[')
        return 0;
    }
    pop();
    return;
        if(char[i]==']')
        if(arr[top]=='{'||arr[top]=='(')
        return 0;
        pop()
        return;
}