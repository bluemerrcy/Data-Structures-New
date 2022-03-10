#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data = value;}};
class LinkList{
    Node* head;
    int length;
    LinkList(){
        head = NULL;
        length = 0;}
    private:
    void insertionatstart(int val){
        Node *n=new Node(val);
        if(head==NULL){
            head=n;}
        else if(head!=NULL){
            n->next = head;
            head=n;}}
    void insertionatend(int val){
        Node *temp;
        Node* n=new Node(val);
        temp=head;
        while(temp!=NULL){
            temp=temp->next;}
        temp->next=n;}
    void insertionatmid(int val, int pos){
        Node* n=new Node(val);
        Node* temp;
        temp=head;
        for(int i=1; i<pos; i++){
            temp=temp->next;}
        n->next=temp->next;
        temp->next=n;
    }
    void clearLL(){
        Node* temp, *prev;
        temp=head;
        prev=head;
        if(head!=NULL){
        while(temp!=NULL){
            temp->next;
            delete prev;
            prev=temp;}}
        else{
            cout<<"There is nothing to delete in the list";}}
    bool search(int val){
        bool flag=false;
        Node* temp;
        temp=head;
        while(temp->data!=val){
            // temp=temp->next;
            if(temp->data=val){
            flag=true;
            return flag;}
            temp=temp->next;}
    }
    void printed(){
        Node* temp;
        temp=head;
        while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;}
    }
    bool emptiness(){
        bool flag=false;
        if(head==NULL){
            flag=true;
            return flag;
        }
    }
    };
int main(){
}