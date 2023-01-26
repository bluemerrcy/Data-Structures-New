#include<iostream>
using namespace std;
class ArrayList{
    private:
    int*arr;
    int length;
    int size;
    int*curr;
    public:
    ArrayList(int s){
        size=s;
        arr=new int[size];
        length=0;
        curr=NULL;
    }
    void start(){
        curr=arr;
    }
    void tail(){
        curr=arr+length-1;
    }
    void next(){
    curr++;}
    void back(){
    curr--;}
    void insert(int val, int pos){
        if(length==size){
            cout<<"List is Full,cannot insert!"<<endl;
            return;
        }
        if(pos<1||pos>(length+1)){
            cout<<"Invalid position, cannot insert!"<<endl;
            return;
        }
        tail();
        for(int i=length;i>=pos;i--){
            *(curr+1)=*curr;
            back();
        }
        *(curr+1)=val;
        length++;
    }
    void remove(int pos){
        if(length==0){
            cout<<"List is empty,nothing to remove"<<endl;
            return;
        }
        if(pos<1||pos>length){
            cout<<"Invalid position,cannot remove!"<<endl;
            return;
        }
        start();
        for(int i=1;i<length;i++){
            if(i>=pos){
            *curr=*(curr+1);}
            next();
        }
        length--;
    }
    void printList(){
        start();
        for(int i=1;i<=length;i++){
            cout<<*curr<<"\t";
            next();
        }
        cout<<endl;
    }
    int get(int pos){
        if(pos<1||pos>length){
            cout<<"Invalid position"<<endl;
            return -1000;
        }
        start();
        for(int i=1;i<pos;i++)
        next();
        return *curr;
    }
    int search(int val){
        if(length==0){
            cout<<"List is empty!"<<endl;
            return -1;
        }
        start();
        for(int i=1;i<=length;i++){
            if(*curr==val)
            return i;
            next();
        }
        return -1;
    }
};
int main(){}