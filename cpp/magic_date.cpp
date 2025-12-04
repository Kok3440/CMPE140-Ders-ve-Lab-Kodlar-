#include <iostream>
using namespace std;

int main ()
{
	/*The date June 10, 1960 is special because when we write it in the following format, the
month times the day equals the year.
6/10/60
Write a program that asks the user to enter a month (in numeric form), a day, and a
two-digit year. The program should then determine whether the month times the day
is equal to the year. If so, it should display a message saying the date is magic.
Otherwise, it should display a message saying the date is not magic.*/

	int month , year , day , control;
	
	cout <<"Please enter your birthday in this format (M/D/Y)\n" <<"And enter your month in numeric form and enter your birth year last 2 digits. " <<endl;
	cin >>month;
	cin >>day;
	cin >>year;
	
	control=month*day;
	
	if (year>=100)
	{
		cout <<"Error pls enter your year correctly" <<endl;
	}
	else if (!(month>12 && month<1))
	{
		cout <<"Your month is invalid. " <<endl;
	}
	else if (control == year)
	{
		cout <<"the date is magic" <<endl;
	}
	else
	{
		cout <<"the date is not magic " <<endl;
	}
return 0;
}

