/*
Jatin Kapoor;
jatinkapoor1021
*/


#include <iostream>
using namespace std;

int Count_of_days(int month_count, int year_count)
{
if( month_count == 2)
{

if((year_count % 400 == 0) || (year_count % 4 == 0
&& year_count % 100 != 0))
{
return 29;
}
else{
return 28;
}
}
else if(month_count == 1 || month_count == 3
|| month_count == 5 || month_count == 7
|| month_count == 8
||month_count == 10 || month_count==12)
{
return 31;
}
else{
return 30;
}
}
int main()
{
int days=0, month, year;
cout << "Enter year: ";
cin >> year;
cout << "Enter month: ";
cin >> month;
days = Count_of_days(month, year);
cout<<endl<<days << " days" << endl;;
return 0;
}
