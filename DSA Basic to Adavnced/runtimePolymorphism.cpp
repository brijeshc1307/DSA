#include <iostream>
using namespace std;


class Parent{
  public:
    void show(){
      cout<<"Inside parent class"<<endl;
    }
};

class Child:public Parent{
  public:
    void show(){
      cout<<"Inside Child"<<endl;
    }
};

class Child1:public Parent{
  public:
    void show(){
      cout<<"Inside Child 1"<<endl;
    }
};

int main() {
  Child obj1;
  Child1 obj2;
  obj1.show();
  obj2.show();
  return 0;
  
}
