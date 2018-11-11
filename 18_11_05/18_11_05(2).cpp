#include <iostream>

class Circle{
private:
  double radius;
public:
  double area(){
    return radius*radius*3.14;
  }
  friend void fun( Circle &c );     // friend declaration
};
void fun( Circle &c ){      // &c 안하고 그냥 (Circle c) 하면 에러 남
  c.radius = c.radius * 2;
}
void main(){
  Circle c; Circle c1;
  std::cout << Circle::counter << std::endl;
}