#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	double result,PI_by_Formula,k;
	result=0;
	k=0;
	PI_by_Formula=1.0;

	while (fabs(PI_by_Formula)>1/3.0){
		
		if (static_cast<int>(k) % 2 == 0){
			PI_by_Formula=1/(2*k+1);
		}
		else if (static_cast<int>(k) !=0){
			PI_by_Formula=-1/(2*k+1);
		}
		result+=PI_by_Formula;
		k++;
		
	}
	
	cout<<"Number of terms " <<k <<endl;
	cout<<"Founded PI is " <<result*4 <<endl;
	cout <<PI_by_Formula;
	cout<<"\n" <<result*4;
	cout<<"\n" <<M_PI;

return 0;
}

