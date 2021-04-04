#include<iostream>
using namespace std;
//inline function
inline int product(int a,int b){
    return a*b;
}
int main(){
    int a=5,b=8;
    cout<<product(a,b);
    return 0;
}