#include<iostream>
using namespace std;

class base{
    public:
    base(int z){
        cout<<"base constructor called"<<z<<endl;

    }
};

class derived :public base {
    public:
    derived(int x, int y): base(x){
        cout<<"derived"<<" "<<y<<endl;
    }
};

class doublederived :public derived {
    public:
    doublederived(int x, int y): derived(x,y){
        cout<<"doublederived"<<endl;
    }
};


int main(){
    doublederived d1(2,3);

}

