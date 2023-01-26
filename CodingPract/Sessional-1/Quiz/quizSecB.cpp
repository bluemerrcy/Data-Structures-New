#include<iostream>
using namespace std;
void SortedInsertion(){
    start();
    int var=*curr;
    next();
    int*left,*right;
    int n=length/2;
    if(var<*curr)
    cout<<"The list is in ascending order";
    else{
    cout<<"The list is not sorted";
    return;}
    for(int i=0;i<n;i++){
        if(*left<vault&&*right>vault)
        insertion(i);
    }
    else{
        left++;
        right--;
    }
}
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
bool isAscending(){
    tail();
    if(*arr<*curr){
    return true;}
    return false;
}
void compare(int val,int curr,bool Asc){
    if(Asc){
        if(val>=curr){
        return true;}
        else{
            return false;
        }
    }
    else{
        if(val<=curr){
            return true;
        }
        else{
            return false;
        }
    }
}
void sorted insert(int val){
    if(size==length)
    cout<<"Length is full,cannot insert"<<endl;
    return;
}
tail();
for(int i=length;i<=1;i--)
{
    if(compareV(val,*curr,isAscending()))
    break;
    else{
        *(curr+1)=*curr;
        back();
    }
}
*(curr+1)=val;
length++;
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
int sorted(int val){
    bool ASC:
    if(*curr<*(curr+1))
    ASC=true;
    else
    ASC=false;
    if(ASC){
    if(*curr>val){
    insertion(value,1)}}
    int i;
    for(int i=1;i<length;i++){
        if(val>*curr)
    }
}
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
void SortedInsertion(){
    bool ASC=false;
    tail();
    if(*arr>*curr){
        return ASC;
    }
    else{
        ASC=true;
        return ASC;
    }
    if(ASC){
        if(*curr>value)
        insertion(value,1)
    }
    else{
        int i=1;
        for(i;i<length;i++)
        if(*curr>value)
        insertion(value,i);
        break;
        else{
            next();
        }
    }
}
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
void sortedInsertion(int vault){
    bool ASC=false;
    tail();
    if(*arr>*curr)
    return ASC;
    else{
        ASC=true;
        return ASC;
    }
    start();
    if(ASC){
        if(*curr>*vault){
            insertion(vault, 1);
        }
        else{
            int i=1;
            for(i;i<length;i++){
                if(*curr>value){
                    insertion(value, i);
                    break;
                }
                else{
                    next();
                }
            }
        }
    }
}
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
void sortedinsertion(){
    bool ASC=false;
    start();
    curr=arr+length-1;
    if(*arr<*curr)
    ASC=true;
    return ASC;
    else 
    ASC
    if(ASC)
    if(value<*curr)
    insertion(value,1)
    else{
        int i=1
        for(i;i<length;i++){
            if(value<*curr)
            insertion(value,i)
            break;
        }
        else
        next()
    }
}


