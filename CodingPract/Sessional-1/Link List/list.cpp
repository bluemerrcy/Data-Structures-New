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
class LinkList{
    private:
    Node*head;
    int length;
    public:
    LinkList(){
        head=NULL;
        length=0;
    }
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    void insertionAtStart(int vault){
        Node*n=new Node(vault);
        if(head=NULL)
        head=n;
        else{
        n->next=head;
        head=n;}
    }
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    void insertionAtEnd(int vault){
        Node*n=new Node(vault);
        if(head==NULL){
            head=n;
        }
        else{
        Node*temp;
        temp=head;
        while(temp!=NULL){
            temp=temp->next;
        }
        temp->next=n;}
    }
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    void insertionInMid(int vault, int pos){
        Node*n=new Node(vault);
        if(head==NULL)
        head=n;
        else{
        Node*temp;
        temp=head;
        for(int i=1;i<pos-1;i++){
            temp=temp->next;
        }
        n->next=temp->next;
        temp->next=n;}
    }
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    void print(){
        Node*temp;
        temp=head;
        while(temp!=NULL){
            cout<<temp->value<<'\n';
            temp=temp->next;
        }
    }
    void search1(int pos){
        Node*temp;
        temp=head;
        for(int i=1;i!=pos;i++){
            temp=temp->next;
        }
        cout<<"The value stored at this location is: ";
        cout<<temp->value;
    }
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    bool search2(int vault){
        bool flag=false;
        Node*temp;
        temp=head;
        while(temp!=NULL){
            if(temp->value=vault){
            flag=true;
            return flag;}
            else
            temp=temp->next;
            }
            return flag;
        }
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    bool emptiness(){
        bool flag=true;
        if(head==NULL)
        return flag;
        else
        flag=false;
        return flag;
    }
    void swap(int pos1, int pos2){
        Node*n1,*n2,*temp1,*temp2;
        n1=new Node(0);
        n2=new Node(0);
        temp1=head;
        temp2=head;
        for(int i=1;i!=pos1;i++){
            temp1=temp1->next;
        }
        for(int i=1;i!=pos2;i++)
            temp2=temp2->next;
            n1=temp1;
            n2=temp2;
            temp1=n2;
            temp2=n1;
    }
};
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
int main(){
    LinkList obj1;
    obj1.insertionAtStart(4);
    obj1.insertionAtStart(3);
    //obj1.print();
}