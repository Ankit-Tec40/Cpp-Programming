
#include<iostream>
using namespace std;
//call by value
// void swap(int a,int b){
//     int c;
//     c=a;
//     a=b;
//     b=c;
// }

//call by refrence using pointer
void swappointer(int* a,int* b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
//call by refrence using c++ refrence variable
void swaprefvar(int &a,int &b){
    int c;
    c=a;
    a=b;
    b=c;
}


int main(){
    int x=4,y=8;
    cout<<x<<y<<endl;
    // swappointer(x,y);
    swaprefvar(x,y);
    cout<<x<<y;
}