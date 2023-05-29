// Public
#include <iostream>
using namespace std;

class Person{
// Properties
public:
  int age;
  void show(){
    cout<<"Age : "<<age<<endl;
  }
};


int main() {
  // creation of object
  Person obj;
  
  // store input in age of the person
  cin>>obj.age;
  
  // call function 
  obj.show();
  
  return 0;
}

// Protected


#include <iostream>
using namespace std;

class Person{
// Properties
protected:
  int age;


};

class Child:public Person{
  public:
  void show(int a){
    age=a;
    cout<<"Age : "<<age<<endl;
  }
};
int main() {
  int age;
  // creation of object
  Child c;
  
  // store input in age of the person
  cin>>age;
  
  // call child class and show function and pass age argument
  c.show(age);
  
  return 0;
}



// Private

#include <iostream>
using namespace std;

class Person{
// Properties
private:
  int age;

public:
  void show(int a){
    age=a;
    cout<<"Age : "<<age<<endl;
  }
  
  
};
int main() {
  int age;
  // creation of object
  Person obj;
  
  // store input in age of the person
  cin>>age;
  
  // call function 
  obj.show(age);
  
  return 0;
}
