
#include<iostream>
using namespace std;
int main(){
    int a=3;
    int* b=&a; 
    cout<<b<<" "<<&a<<endl;
    cout<<"value at b "<<*b;
 //& is address of operator,,* is derefrence operator
    
    return 0;
}