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


// C++ program to illustrate
// concept of Virtual Functions

#include <iostream>
using namespace std;

class base {
public:
	virtual void print() { cout << "print base class\n"; }

	void show() { cout << "show base class\n"; }
};

class derived : public base {
public:
	void print() { cout << "print derived class\n"; }

	void show() { cout << "show derived class\n"; }
};

int main()
{
	base* bptr;
	derived d;
	bptr = &d;

	// Virtual function, binded at runtime
	bptr->print();

	// Non-virtual function, binded at compile time
	bptr->show();

	return 0;
}

