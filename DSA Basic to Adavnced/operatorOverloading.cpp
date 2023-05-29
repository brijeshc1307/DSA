#include <iostream>
using namespace std;


class B{
  public:
    int a;
    int b;
  public:
    int add(){
      return a+b;
    }
    void operator+ (B &obj){
      int val =this->a;
      int val1= obj.a;
      cout<<"output "<<val1-val<<endl;
    }
    void operator() (){
      cout<<"main bracket "<<this->a<<endl;
    }
};


int main() {
  B obj1, obj2;
  obj1.a=4;
  obj2.a=7;
  // operator overload
  obj1+obj2;
  obj1();
  return 0;
  
}
