#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	double k , PI_by_Formula , result ;
	
	result=3.0;
	k=1.0;
	PI_by_Formula=1.0;
	
	while (fabs(PI_by_Formula) > 0.000001){
		
		if (static_cast<int>(k) % 2 ==0){
			
			PI_by_Formula=(-4/((2*k)*(2*k+1)*(2*k+2)));
		}
		else{
			
			PI_by_Formula=(4/((2*k)*(2*k+1)*(2*k+2)));
			
		}
		
		result+=PI_by_Formula;
		k++;
	}
	
	cout <<k <<endl;
	cout <<result <<endl;
	cout <<PI_by_Formula;

return 0;
}

