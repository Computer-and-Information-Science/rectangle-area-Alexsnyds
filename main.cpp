#include <iostream>
using namespace std;

int main() { 
  double length = 7.2;
  double width = 1.3;   
 
  

  
  cout << "rectangle properties:" << endl;
       

  double perimeter = 2 * (length + width);
  double area = length * width;

  cout << "Length = " << length << endl;
  cout << "Width = " << width << endl;
  cout << " Perimeter = " << perimeter << endl;
  cout << " Area = " << area << endl;
}