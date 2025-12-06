#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
	srand(time(0));
	
	double x ,y ,N_inside,N_total,PI_by_Formula;
	N_inside=0;
	N_total=0;
	
	for (long long i=0 ;i<20000000;i++){
		
		double x= (double)rand()/RAND_MAX;
		double y= (double)rand()/RAND_MAX;
		
		if ((x*x)+(y*y)<=1){
			
			N_inside++;
		}
		N_total++;
		
		
	}
	
	PI_by_Formula=4*(N_inside/N_total);
	cout <<PI_by_Formula <<endl;
	cout <<N_inside <<"\t" <<N_total <<endl;
return 0;
}

