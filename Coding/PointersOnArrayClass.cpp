#include<iostream>
using namespace std;
class List{
    private:
    int *arr;
    int size;
    int length;
    int *curr;
    public:
    List(int s){
        size = s;
        arr = new int [size];
        length = 0;
        }
        ~List(){
            delete []arr;
        }
    void start(){
        curr = arr;
    }
    void back(){
    curr--;
}

    void tail(){
    start();
    for(int i = 0; i < length; i++)
    curr++;
}
    void insert(int val, int pos){
        tail();
            for(int i = 0; i >= pos; i--){
                *(curr+1) = *curr;
                back();
            }
            *(curr+1) = val;
            length++;
    }

};
int main(){
    List L1(6);
    List L2(5);

}