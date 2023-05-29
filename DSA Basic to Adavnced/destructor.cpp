// deep copy
#include <iostream>
using namespace std;

// Box Class
class Helloworld {
  public:
    // Constorctr
    Helloworld(){
      cout<<"Constructor is called"<<endl;
    }
  ~Helloworld(){
      cout<<"Destructor is called";
    }
  void show(){
    cout<<"Hello world"<<endl;
  }
};

// Driver Code
int main()
{
	// Object of class first
	Helloworld obj;
  obj.show();
  

	return 0;
}
