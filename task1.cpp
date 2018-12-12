#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<cmath>

using namespace std;

class Shape{
public:
float virtual get_area()=0;

float virtual get_perimeter()=0;


};

class Circle : public Shape {
private:
  float radius;

public:
float get_area()
{
  return 2*3.1428*radius;
}

float get_perimeter()
{
  return (2*3.1416*radius);
}
};

class Rectangle : public Shape {
private:
  float width;
  float height;

public:
float get_area()
{
  return width*height;
}

float get_perimeter()
{
  return (2*width*height);
}
};


class Triangle : public Shape {
private:
  float base;
  float height;
public:
float get_area()
{
  return 0.5*base*height;
}

float get_perimeter()
{
  return (base+height+(sqrt((base*base)+(height*height))));
}

};


int main() {

  return 0;
}
