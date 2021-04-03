//pass by value
#include<iostream>
using namespace std;
int sum(int a,int b){
    int c=a+b;
    return c;
    }
int main(){
    cout<<sum(6,4);
}