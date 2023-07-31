#include<iostream>
using namespace std;
class base {
    public:
    base(){
        cout<<"base constructor called"<<endl;
    }
};

class derived :base {
    public:
    derived(){
        cout<<"derived constructor called"<<endl;
    }
};

class derived2 :derived{
    public:
    derived2(){
        cout<<"derived2 constructor called"<<endl;
    }
};

int main(){
    derived2 d;

}