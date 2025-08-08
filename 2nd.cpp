#include <iostream>
#include <string>
using namespace std;

int main () {

  float x, y;
  float sum, difference, product, quotient;
  
  cout << "Enter A Number: ";
  cin >> x;
  cout << "Enter Another Number: ";
  cin >> y;
  sum = x + y;
  cout << "The Sum is: " << sum << endl;
  difference = x - y;
  cout << "The Difference is: " << difference << endl;
  product = x * y;
  cout << "The Product is: " << product << endl;
  if (y != 0) {
      quotient = x / y;
      cout << "The Quotient is: " << quotient << endl;
    } else {
      cout << "Division by zero is not allowed." << endl;
    }

    return 0;
}
