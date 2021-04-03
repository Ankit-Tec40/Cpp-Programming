//function prototype
//type function-name(arguments);--acceptable

#include<iostream>
using namespace std;
int sum(int a,int b);
int main(){
    cout<<sum(4,5);
    return 0;
}
int sum(int a,int b){
    int c=a+b;
    return c;
    }