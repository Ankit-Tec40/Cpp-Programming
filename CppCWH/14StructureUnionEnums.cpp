#include<iostream>
using namespace std;
//Structure used for diffrent dsatatype
struct employee{
    int id;
    char favchar;
    float salary;
    };
int main(){
    struct employee ank;
    ank.id=12345;
    ank.favchar='a';
    ank.salary=57567;
    cout<<ank.salary;
    return 0;
}