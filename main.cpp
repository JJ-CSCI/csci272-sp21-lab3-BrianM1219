//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Put the assignment code here

class Quaternion {
  public:
  Quaternion (double w, double x, double y, double z);
   {
      w=p;
      x=q;
      y=r;
      z=s;
   }
     bool operator == (const Quaternion p)
    {
      if ((p->w==this->w) && p->x==this->x) && p->y==this->y) && p->z==this->z))

      return true;
      else
      return false;
    } 
    Quaternion operator+(const Quaternion p)
    {
      Quaternion r;
      r.w=p.w+this->w;
      r.x=p.x+this->x;
      r.y=p.y+this->y;
      r.z=p.z+this->z;
      return r;
    }
    Quaternion operator - (const Quaternion p)
    {
      Quaternion r;
      r.w=p.x-this->w;
      r.x=p.y-this->x;
      r.y=p.c-this->y;
      r.z=p.a-this->z;
      return r;
    }
};
//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "q1" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        REQUIRE( q == p );
    }
    SECTION( "q2" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q + p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{0.0, 0.0, 0.0, 0.0};
        REQUIRE( (q - p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q * 2.0) == r );
    }
}
//------------------------------
