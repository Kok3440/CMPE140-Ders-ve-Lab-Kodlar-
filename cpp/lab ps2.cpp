#include <iostream>
using namespace std;

int main ()
{
	/*A company sells a package that retails for $100. Quantity discounts are 
given according to the following table: 
Quantity  Discount
1-9  		0% 
10–19   	20%  
20–49   	30%
50–99   	40% 
100 or more  50%	
	*/

	int quantity,price;
	double discount;
	
	price=100;
	
	cout <<"How many product do you want to buy ? \n";
	cin >>quantity;
	
	if (quantity>=1 && quantity<=9 )
	{
		cout <<"You bougt " <<quantity <<" product. \n";
		cout <<"You have 0% discount "<<"You need to pay " <<price <<"$";
	}
	else if (quantity>=10 && quantity<=19)
	{
		price=quantity*100;
		discount=price*0.20;
		cout <<"You bougt " <<quantity <<" product. \n";
		cout <<"You have " <<discount <<"% "   <<"discount " <<"You need to pay " <<price <<"$";
		
	}






return 0;
}

