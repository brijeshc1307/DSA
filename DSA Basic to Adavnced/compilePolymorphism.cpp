// function overloading with different number of arguments
#include <iostream>
using namespace std;

class A {
    public:
      int add(int num1, int num2) {
          return num1+num2;
      }
      int add(int num1, int num2, int num3) {
          return num1+num2+num3;
      }
};


int main() {
    A obj;
    cout<<obj.add(10,20)<<endl;
    cout<<obj.add(10,20,30)<<endl;
    return 0;
}

// function overloading with different type of arguments
#include <iostream>
using namespace std;

class A {
    public:
      int add(int num1, int num2) {
          return num1+num2;
      }
      double add(double num1, double num2) {
          return num1+num2;
      }
};


int main() {
    A obj;
    cout<<obj.add(10,20)<<endl;
    cout<<obj.add(10.5,20.5)<<endl;
    return 0;
}

// function overloading with default arguments
#include <iostream>
using namespace std;

class A {
    public:
      int add(int a, int b, int c=0, int d=0) {
          return a+b+c+d;
      }
};


int main() {
    A obj;
    cout<<obj.add(10,20)<<endl;
    cout<<obj.add(10,20,30)<<endl;
  cout<<obj.add(10,20,30,40)<<endl;
    return 0;
}
