#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node*next,*prev;
    Node(int valve){
    value=valve;
    next=prev=NULL;}
};
class Doubly{
    private:
    Node*head;
    int length;
    public:
    Doubly(){
    head=NULL;
    length=0;}
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    void insertionAtHead(int vault){
        Node*n=new Node(vault);
        if(head==NULL)
        head=n;
        else
        n->next=head;
        head->prev=n;
        head=n;
    }
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    void insertionAtEnd(int vault){
        Node*n=new Node(vault);
        if(head==NULL)
        head=n;
        else{
            Node*temp;
            temp=head;
            while(temp!=NULL)
            temp=temp->next;
            n->prev=temp;
            temp->next=n;
        }
    }
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    void insertionAtMid(int vault, int pos){
        Node*n=new Node(vault);
        if(head=NULL)
        head=n;
        else{
            Node*temp=head;
            for(int i=0;i<pos-1;i++)
            temp=temp->next;
            n->prev=temp;
            n->next=temp->next;
            n->next->prev=n;
            temp->next=n;
            //temp->next->prev=n;
        }
    }
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    void Deletion(int pos){
        if(head==NULL)
        cout<<"List is empty";
        else{
            Node*temp;
            temp=head;
            for(int i=1;i<pos;i++){
                if(i==pos-1){
                    Node*curr;
                    curr=temp->next;
                    temp->next->next->prev=temp;
                    temp->next=temp->next->next;
                    delete temp->next;
                }
            }
        }
    }
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    void printing(){
        bool flag;
        cout<<"Enter 1 for normal order and 0 for reverse order: ";
        cin>>flag;
        if(flag==1){
            Node*temp;
            temp=head;
            while(temp!=NULL){
            cout<<temp->value;
            temp=temp->next;}
        }
        if(flag==0){
            Node*temp,*past;
            temp=head;
            while(temp!=NULL)
            past=temp;
            temp=temp->next;
            while(past!=NULL)
            cout<<past->value;
            past=past->prev;
        }
    }
    bool emptiness(){
        bool flag=false;
        if(head==NULL){
        flag=true;
        return flag;}
        else
        return flag;
    }
};
int main(){}