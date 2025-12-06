#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	
	double result,PI_by_Formula,k;
	result=0;
	k=0;
	while (k<=20){
		if (static_cast<int>(k) % 2 == 0){
			PI_by_Formula=1/(2*k+1);
		}
		else if (static_cast<int>(k) !=0){
			PI_by_Formula=-1/(2*k+1);
		}
		result+=PI_by_Formula;
		cout<<"k=" <<k <<"---> "<<PI_by_Formula <<endl;
		cout <<result <<endl;
		k++;
	}
	
	cout <<"Result of the formula is " <<result <<" If we want to find PI. Multiply with 4 and approximitly result is : " <<result*4 <<endl;
	cout <<"Original PI is : " <<M_PI <<endl;
	cout <<"Difference between them is : " <<(result*4)-M_PI <<endl;
return 0;
}

