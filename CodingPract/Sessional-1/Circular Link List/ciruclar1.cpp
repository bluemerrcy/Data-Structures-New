#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node*next;
    Node(int valve){
        value=valve;
        next=NULL;
    }
};
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
class CircularLink{
    private:
    Node*head;
    int length;
    public:
    CircularLink(){
        head=NULL;
        length=0;
    }
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    void insertionAtStart(int vault){
        Node*n=new Node(vault);
        if(head==NULL){
        head=n;
        n->next=head;}
        else{
            n->next=head;
            Node*temp;
            temp=head;
            while(temp!=NULL)
            temp=temp->next;
            head=n;
            temp->next=head;
        }
    }
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    void insertionAtEnd(int vault){
        Node*n=new Node(vault);
        if(head==NULL){
        head=n;
        n->next=head;}
        else{
            Node*temp;
            temp=head;
            while(temp!=NULL)
            temp=temp->next;
            temp->next=n;
            n->next=head;
        }
    }
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    void insertionAtMid(int vault, int pos){
        Node*n=new Node(vault);
        if(head==NULL){
        head=n;
        n->next=head;}
        else{
            Node*temp;
            temp=head;
            for(int i=1; i<pos-1; i++)
            {
                temp=temp->next;
            }
            n->next=temp->next;
            temp->next=n;
        }
    }
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    void deletion(int pos){
        if(head==NULL)
        cout<<"List is empty";
        if(pos==1){
        Node*curr,*temp;
        curr=temp=head;
        head=head->next;
        while(temp!=NULL)
        temp=temp->next;
        temp->next=head;
        delete curr;}
        else if(pos==length){
        Node*temp,*curr;
        temp=head;
        while(temp!=NULL){
        curr=temp;
        temp=temp->next;}
        curr->next=head;
        delete temp;
        }
        else{
            Node*temp,*curr;
            temp=head;
            for(int i=1;i!=pos;i++){
                curr=temp;
                temp=temp->next;
            }
            curr->next=temp->next;
            delete temp;
        }
    }
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    bool search(int vault){
        bool flag=false;
        if(head->value==vault){
            flag=true;
            return flag;
        }
        else{
            Node*temp;
            temp=head;
            while(temp!=NULL){
                if(temp->value==vault){
                    flag=true;
                    return flag;
                }
                else
                temp=temp->next;
            }
        }
    }
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    void print(){
        if(head==NULL)
        cout<<"The List is empty";
        else{
            Node*temp;
            temp=head;
            while(temp!=NULL){
                cout<<temp->value;
                temp=temp->next;
            }
        }
    }
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    bool emptiness(){
        bool flag=false;
        if(head==NULL)
        flag=true;
        return flag;
    }
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
};
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
int main(){}