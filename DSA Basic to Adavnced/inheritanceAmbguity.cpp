#include <iostream>
using namespace std;

class A {
    public:
      void display() {
          cout<<"class A content.";
      }
};

class B{
    public:
      void display() {
          cout<<"class B content.";
      }
};

class C : public A, public B {
    public:
};

int main() {
    C obj;
    //obj.display();  // error milega kunki compiler nahi samajh payga ki kaun sa function call kare.
    obj.B::display();
    return 0;
}
