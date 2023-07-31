#include<iostream>
using namespace std;
// if we want to call parameteried constructor of base class
class base {
    public:
    base(int z){
        cout<<"base constructor called  "<<z<<endl;
    }
};

class derived :base {
    public:
    derived(int z):base(z){
        cout<<"derived constructor called"<<endl;
    }
};



int main(){
    derived d(5);

}