#include<iostream>
using namespace std;
class ArrayList{
    private:
    public:
    void Largest(){
        int Highest=0;
        int Smallest=0;
        start();
        for(int i=0;i<length;i++){
            if(Smallest>*curr){
                Smallest=*curr;
                next()
            }
            else
            next();
        }
        for(int i=0;i<length;i++){
        if(Highest<*curr){
        Highest=*curr;
        next()}
        else
        next();}
        }
    void Sorted(){
        start();
        for(int i=length;i!=1;i--)
        if(*curr>*(curr+1)){
            int temp;
            temp=*(curr+1);
            *(curr+1)=*curr;
            *curr=temp;
        }
        else{
            next(); 
        }
    }
    }
};
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
int largestSmallest(){
    int Higest,Lowest;
    Higest=0;
    Lowest=0;
    start();
    for(int i=1;i<length;i++){
        if(Higest<*curr){
        Highest=*curr;
        next();}
        else{
            next();
        }
    }
    start();
    for(int i=1;i<length;i++){
        if(value>*curr){
            Lowest=*curr;
            next();
        }
        else{
            next();
        }
    }
}
int main(){}