/*
Jatin Kapoor;
jatinkapoor1021
Determines the smallest of three numbers
*/



#include <iostream> 

 
int main() { 

  int n1, n2, n3;

  std::cout << "Enter 1st number: ";  
  std::cin >> n1; 
  std::cout << "Enter 2nd number: "; 
  std::cin >> n2; 
  std::cout << "Enter 3rd number: "; 
  std::cin >> n3; 
  
  if( n1 < n2 ) {
    if (n1 < n2){
      std::cout << "The smaller of the three is "  << n1; 
    }
    else{
      std::cout << "The smaller of the three is "  << n3;
    }
  } 
  else if ( n2 < n1 ) {
    if (n2 < n3) 
      std::cout << "The smaller of the three is "  << n2;
  }
    else{
      std::cout << "The smaller of the three is "  << n3;
  }
} 