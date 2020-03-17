#include <iostream>
#include <iomanip>
using namespace std;

class Circle{
  public:
    void setRadius(int r);
    double getArea();
  private:
    int radius;
};
int main(){

  Circle myCircle;
  double radius;

  cout << "Enter the radius of the circle: ";
  cin >> radius;

  myCircle.setRadius(radius);
  cout << fixed << setprecision(2) << "Area (circle) = " << myCircle.getArea() << " sq. units\n";

  return 0;
}
void Circle::setRadius(int r){
  radius = r;
}
double Circle::getArea(){
  return 3.1416 * radius * radius;
}