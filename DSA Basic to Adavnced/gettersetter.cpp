#include<iostream>
using namespace std;

class Shape
{
    // as private so object.height and object.width is inaccessible
    int height, width;
  
    public:
  //setters
    void setHeight(int h){
        height = h;
    }

    void setWidth(int w){
        width = w;
    }

  //getters
    int getHeight(){
        return height;
    }

    int getWidth(){
      return width;
    }
};

int main()
{
    Shape shape;
    
    // setters
    shape.setHeight(5);
    shape.setWidth(2);

    // getters
    cout << "The Height is : " << shape.getHeight() << endl;
    cout << "The Width is : " << shape.getWidth() << endl;
    
    // shape.height or shape.width wont work as they are private

    return 0;
}
