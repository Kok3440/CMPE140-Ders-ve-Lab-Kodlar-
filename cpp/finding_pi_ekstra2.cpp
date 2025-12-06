#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	
	double k , PI_by_Formula , result ;
	
	k=1;
	result=1.0;
	PI_by_Formula=0;
	
	while (fabs(PI_by_Formula-1.0) > 0.000000001){
		
		PI_by_Formula=((2.0*k)/(2*k-1))*((2.0*k)/(2*k+1));
		
		result*=PI_by_Formula;
		k++;
		
	}
	
	cout <<k <<endl;
	cout <<result*2;
	
return 0;
}

