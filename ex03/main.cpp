#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>
bool bsp(Point const a, Point const b, Point const c, Point const point);

/*
  Tests for the BSP function
  BSP stands for Binary space partitioning.
  Implement a function which indicates whether a point is inside of a triangle or not.
*/

int main( void ) {

  Point a(0, 0);
  Point b(0, 5);
  Point c(5, 0);

  bool answer;

  answer = bsp(a, b, c, Point(1, 1));
  std::cout << "Test 1: " << answer << std::endl;
  answer = bsp(a, b, c, Point(2, 2));
  std::cout << "Test 2: " << answer << std::endl;
  answer = bsp(a, b, c, Point(3, 3));
  std::cout << "Test 3: " << answer << std::endl;
  answer = bsp(a, b, c, Point(4, 4));
  std::cout << "Test 4: " << answer << std::endl;

  Point a2(0, 0);
  Point b2(0, 4.01f);
  Point c2(4.01f, 0);

  answer = bsp(a2, b2, c2, Point(1, 1));
  std::cout << "Test 5: " << answer << std::endl;
  answer = bsp(a2, b2, c2, Point(2, 2));
  std::cout << "Test 6: " << answer << std::endl;
  answer = bsp(a2, b2, c2, Point(3, 3));
  std::cout << "Test 7: " << answer << std::endl;
  answer = bsp(a2, b2, c2, Point(4, 4));
  std::cout << "Test 8: " << answer << std::endl;

}
