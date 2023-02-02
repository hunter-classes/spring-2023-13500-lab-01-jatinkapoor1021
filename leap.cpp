/*
Jatin Kapoor;
jatinkapoor1021
Determine whether the year is a leap year or common year
*/


#include <iostream>


int main() {

  int year;
  std::cout << "Enter a year: ";
  std::cin >> year;

  
  if (year % 400 == 0) {
    std::cout << " Leap year.";
  }
  
  else if (year % 100 == 0) {
    std::cout<< " Common year.";
  }
  
  else if (year % 4 == 0) {
    std::cout << " Leap year.";
  }
  
  else {
    std::cout << " Common year.";
  }

  return 0;
}
