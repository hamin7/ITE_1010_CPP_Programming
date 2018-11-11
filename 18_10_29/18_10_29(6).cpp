#include <iostream>

class Circle{
public:
  Circle(){     // default Constructor
    std::cout << "Default Constructor called ... " << std::endl;
    radius = 0.0;
  }     // Constructor
  const double radius;     // attribute
  double area()     // method
  {
    return radius * radius * 3.14;
  };
  ~Circle(){     // destructor?
    std::cout << "Destructor called ... " << std::endl;
  }
};

void main()
{
  Circle c;     // initialization of public members only!   // defines an object
  std::cout << c.area() << std::endl;
}