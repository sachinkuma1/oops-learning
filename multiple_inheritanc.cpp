#include<iostream>
using namespace std;
class teacher{
    public:
   void print(){
        cout<<"teacher method"<<endl;
    }
};

class student{
    public:
   void print(){
        cout<<"student class function "<<endl;
    }
};

class ta:public teacher, public student{
    public:
    int x=9;
   
};

int main(){
    ta t1;
    t1.teacher :: print(); // scope resolution 
}