#include "Fixed.hpp"
#include "Point.hpp"

/*
To conclude, implement the following function in the appropriate file:

  bool bsp( Point const a, Point const b, Point const c, Point const point);

• a, b, c: The vertices of our beloved triangle.
• point: The point to check.
• Returns: True if the point is inside the triangle. False otherwise.
  Thus, if the point is a vertex or on edge, it will return False
*/

float abs_val(float x) {
  return (x < 0) ? -x : x;
}

float area(Point const i, Point const j, Point const k) {
  return 0.5f * abs_val( \
    (i.getX() * (j.getY() - k.getY()) \
    + j.getX() * (k.getY() - i.getY()) \
    + k.getX() * (i.getY() - j.getY())).toFloat());
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
  float S_ABC = area(a, b, c);
  float S_ABP = area(a, b, point);
  float S_BCP = area(b, c, point);
  float S_CAP = area(c, a, point);
  return abs_val(S_ABC - (S_ABP + S_BCP + S_CAP)) < 1e-6;
}
