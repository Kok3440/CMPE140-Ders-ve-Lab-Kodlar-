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
	int number;
	bool a,b;
	cout<<"Enter number " <<endl;
	cin>>number;
	a=isPerfect(number);
	b=isArmstrong(number);
	
	if (isPrime(number)==1){
		cout<<"Prime:Yes" <<endl;
	}
	else{
		cout<<"Prime:No" <<endl;
	}
	
	if (a==1){
		cout<<"Perfect:Yes" <<endl;
	}
	else{
		cout<<"Perfect:No" <<endl;
	}
	
	if (b==1){
		cout<<"Armstrong:Yes" <<endl;
	}
	else{
		cout<<"Armstrong:No" <<endl;
	}

return 0;
}

