#include <iostream>
#include <string>
using namespace std;

int main () {

int grade; 
char yon;
do {
  cout << "Enter your grade: ";
cin >> grade;
if (grade > 98) {
            cout << "WITH HIGHEST HONORS";
        } else if (grade > 94) {
            cout << "WITH HIGH HONORS";
        } else if (grade > 89) {
            cout << "WITH HONORS";
        } else if (grade >= 75) {
            cout << "PASAR LANG";
        } else {
            cout << "BAWI NEXT TIME";
        }
        cout << endl;
        cout << "Calculate Again(Y/N)?: ";
        cin >> yon;
} while (yon == 'Y' || yon == 'N');
return 0;
}
