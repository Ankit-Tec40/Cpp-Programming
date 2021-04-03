#include<iostream>
using namespace std;

int main(){
    int marks[]={45,67,87,34};
    int* p=marks;
    p++;
    cout<<p<<" "<<*p;
    return 0;
}