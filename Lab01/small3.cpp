/*
Jatin Kapoor;
jatinkapoor1021
*/



#include <iostream> 
using namespace std;
 
int main() { 

  int n1, n2, n3;

  cout << "Enter 1st number: ";  
  cin >> n1; 
  cout << "Enter 2nd number: "; 
  cin >> n2; 
  cout << "Enter 3rd number: "; 
  cin >> n3; 
  
  if( n1 < n2 ) {
    if (n1 < n2){
      cout << "The smaller of the three is "  << n1; 
    }
    else{
      cout << "The smaller of the three is "  << n3;
    }
  } 
  else if ( n2 < n1 ) {
    if (n2 < n3) 
      cout << "The smaller of the three is "  << n2;
  }
    else{
      cout << "The smaller of the three is "  << n3;
  }
} 


