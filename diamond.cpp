#include <iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"constructor a"<<endl;
    }

    void print(){
        cout<<"print function in class a"<<endl;
    }
};

class B:virtual  public A{
  
  public:
  B(){
    cout<<"constructor b called"<<endl;
  }
};

class C : virtual public A{
    public:
    C(){
        cout<<"constructor c called"<<endl;
    }
};

class D:public B, public C{
    public:
    D(){
        cout<<"constructor d is called"<<endl;
    }

    
};

int main(){
    D d;
    d.B:: print();
    
    return 0;
}