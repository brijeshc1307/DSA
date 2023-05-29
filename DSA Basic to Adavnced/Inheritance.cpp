// Simple inheritance

#include <iostream>
using namespace std;

// base class
class Animal {

   public:
    void eat() {
        cout << "I can eat!" << endl;
    }

    void sleep() {
        cout << "I can sleep!" << endl;
    }
};

// derived class
class Dog : public Animal {
 
   public:
    void bark() {
        cout << "I can bark! Woof woof!!" << endl;
    }
};

int main() {
    // Create object of the Dog class
    Dog dog1;

    // Calling members of the base class
    dog1.eat();
    dog1.sleep();

    // Calling member of the derived class
    dog1.bark();

    return 0;
}

// Types of inhertance
// Single inheritance
#include <iostream>
using namespace std;

class A {
    public:
      void display() {
          cout<<"Base class content.";
      }
};

class B : public A {
////

};


int main() {
    B obj;
    obj.display();
    return 0;
}


// Multilevel inheritance
#include <iostream>
using namespace std;

class A {
    public:
      void display() {
          cout<<"Base class content.";
      }
};

class B : public A {};

class C : public B {};

int main() {
    C obj;
    obj.display();
    return 0;
}

// Multilple inheritance
#include <iostream>
using namespace std;

class A {
    public:
      void display() {
          cout<<"Base class content.";
      }
};

class B {
//////
};

class C : public A, public B {
////////
};

int main() {
    C obj;
    obj.display();
    return 0;
}


// Hierarchical inheritance
#include <iostream>
using namespace std;

class A {
    public:
      void display() {
          cout<<"Base class content.";
      }
};

class B : public A {
//////
};

class C : public A{
////////
};

class D : public B {
//////
};
class E : public B {
//////
};
class F : public C {
//////
};
class G : public C {
//////
};

int main() {
    C obj;
    obj.display();
    return 0;
}

// Hybrid inheritance
#include <iostream>
using namespace std;

class A {
    public:
      void display() {
          cout<<"Base class content.";
      }
};
class D{
};
class B : public A {};

class C : public A {};

class C : public D {};

int main() {
    C obj;
    obj.display();
    return 0;
}
