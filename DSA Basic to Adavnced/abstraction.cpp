#include <iostream>
using namespace std;


class Abstrction{
  private:
    int a,b;
  public:
    void set(int x, int y){
      a=x;
      b=y;
    }
  void show(){
      cout<<"a = "<<a<<endl;
      cout<<"b = "<<b<<endl;
    }
};


int main() {
  Abstrction obj;
  
  obj.set(10,20);
  obj.show();
  
  return 0;
}
