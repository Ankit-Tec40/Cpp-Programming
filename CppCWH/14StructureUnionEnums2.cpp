#include<iostream>
using namespace std;
//Structure used for diffrent dsatatype
typedef struct employee{
    int id;
    char favchar;
    float salary;
    }ep;
int main(){
    ep ank;
    ank.id=12345;
    ank.favchar='a';
    ank.salary=57567;
    cout<<ank.salary;
    return 0;
}