#include <iostream> 
using namespace std;
 
int main() 
{ 
  int n1, n2; 
   
  std::cout << "Enter 1st number: "; 
  std:: cin >> n1; 
  std::cout << "Enter 2nd number: "; 
  std:: cin >> n2; 
   
  if( n1 > n2 ) 
    std::cout << "The smaller of the two is " << n2; 
  else if ( n1 == n2 ) 
    std::cout << "1st and 2nd are the same number"; 
  else 
    std::cout << "The smaller of the two is " << n1; 
} 