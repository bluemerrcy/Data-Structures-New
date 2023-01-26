int joshepous(int n,int m){
    for(int i=1;i<=n;i++)
    insert(i,i);
    node*curr=head;
    int pos=1;
    while(length!=1){
        for(int i=1;i<m;i++){
            pos++;
            curr=curr->next;
        }
        curr=curr->next;
        remove(pos);
    }
}
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
int joshepous(int n, int m){
    for(int i=1;i<n;i++)
    insert(i,i);
    node*curr=head;
    while(length!=1){
        for(int i=1;i<m;i++){
            pos++;
            curr=curr->next;
        }
        curr=curr->next;
        remove(pos);
    }
}
int joshepous(int n,int m){
    for(int i=1;i<n;i++)
    insert(i,i);
    node*curr=head;
    int pos=1
    while(length!=1)
    for(int i=1;i<m;i++){
        int pos++;
        curr=curr->next;
    }
    curr=curr->next;
    remove(pos);
}
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
int joshepous(int n, int m){
    for(int i=1;i<n;i++)
    insert(i,i);
    Node*curr=head;
    int pos=1;
    while(length!=1){
        for(int i=1;i<m;i++){
            pos++;
            curr=curr->next;
        }
        curr=curr->next;
        remove(pos);
    }
}
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
int josephous(int n,int m){
    for(int i=1;i<n;i++)
    insertion(i,i);
    Node*curr=head;
    int pos=1;
    while(length!=1){
        for(int i=1;i<m;i++){
            pos++;
            curr=curr->next;
        }
        curr=curr->next;
        remove(pos);
    }
    return curr->data;
}
