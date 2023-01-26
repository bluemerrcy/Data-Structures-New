#include<iostream>
using namespace std;
int main(){
    int x=5;
    int *ptrr=NULL;
    ptrr=&x;
    cout<<*ptrr<<"\n";
    cout<<x<<"\n";
    *ptrr=9;
    cout<<&x<<"\n";
    cout<<*&ptrr<<"\n";
    cout<<&*ptrr<<"\n";
    cout<<ptrr<<"\n";
    cout<<*ptrr<<"\n";
    cout<<x<<"\n";
    return 0;
}