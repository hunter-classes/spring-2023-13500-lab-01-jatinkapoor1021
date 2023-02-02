/*
Jatin Kapoor;
jatinkapoor1021
Determine whether the year is a leap year or common year
*/


#include <iostream>
using namespace std;

int main() {

  int year;
  cout << "Enter a year: ";
  cin >> year;

  
  if (year % 400 == 0) {
    cout << " Leap year.";
  }
  
  else if (year % 100 == 0) {
    cout<< " Common year.";
  }
  
  else if (year % 4 == 0) {
    cout << " Leap year.";
  }
  
  else {
    cout << " Common year.";
  }

  return 0;
}