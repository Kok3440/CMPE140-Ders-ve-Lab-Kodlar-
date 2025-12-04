#include <iostream>
#include <cmath>
using namespace std;



bool isPrime(int n){
	
	if (n<=1){
		return false;
	}
	for (int i =2 ;i<n;i++){
		if (n%i ==0){
			return false;
		}
	} 
	return true;
}


bool isPerfect(int n){
	int sum=0;
	
	for (int i=1;i<n;i++){
		if (n%i ==0){
			sum+=i;
		}
	}
	return (sum==n);
}

bool isArmstrong(int n){
	
	int digits=0;
	int sum=0;
	int temp_number=n;
	
	while(temp_number>0){
		
		temp_number=temp_number/10;
		digits++;	
	}
	
	temp_number=n;
	
	while(temp_number>0){
		
		int last_digits=temp_number%10;
		
		sum+= round(pow(last_digits,digits));
		
		temp_number=temp_number/10;
	}
	return (sum==n);
}

int main ()
{
	bool a , b, c;
	
	int i =2;
	

	
	while (i<=1000){
		a=isPrime(i);
		b=isPerfect(i);
		c=isArmstrong(i);
		
		if (a){
			cout <<i <<"\t :Prime" <<endl;
		}
	
		if (b){
			cout<<i <<"\t :Perfect" <<endl;
		}

		if (c){
			cout<<i <<"\t :Armstrong" <<endl;
		}
			
			i++;
	}

return 0;
}

