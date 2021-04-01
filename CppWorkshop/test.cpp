using namespace std;
#include<iostream>
class student{
    string name;
    int roll;
    public:
    void get(){
        name="ankit";
        roll=34;
    }
    void show(){
        cout<<name<<"\n"<<roll;
    }
};
int main(){
    student ob;
    ob.get();
    ob.show();
    return 0;
}
