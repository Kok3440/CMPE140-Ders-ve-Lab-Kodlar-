#include <iostream>
using namespace std;

int main ()
{
	int day[31] ={24,25,26,27,28,29,30,31,32,33,34,21,36,30,29,28,27,26,25,24,23,22,21,20,19,18,20,21,22,23,24};
	
	int high_temp=day[0];
	int low_temp=day[0];
	int i=0;
	int j=0;
	int k=0;
	int gun=30;
	int max_day=1;
	int min_day=1;
	
	while (i<=gun){
		cout<<"Day " <<i+1 <<":\ttemperature " <<day[i] <<endl;
		i++;	
	}
	
	double sum_temperature=0;
	double avg=0;
	while (j<=gun){
		sum_temperature = sum_temperature + day[j];
		
		if (high_temp<day[j]){
			high_temp=day[j];
			max_day=j+1;
		}
		if (low_temp>day[j]){
			low_temp=day[j];
			min_day=j+1;	
		}
		
		j++;
	}
	avg= sum_temperature / gun ;
	cout<<"Avarage temperature : "<<avg <<endl;
	cout<<"highest temperature " <<high_temp <<" Day no: "<<max_day <<endl;
	cout<<"lowest temperature "<<low_temp <<" Day no: "<<min_day <<endl;
	
	int hot_day=0;
	while (k<=gun){
		
		if (day[k]>avg){
			hot_day++;
			cout<<day[k] <<" is hot day." <<endl;
		}
		k++;
	}
	cout<<"Number of hot day is : " <<hot_day <<endl;
	
	int streak=0;
	int streak_highest=1;
	int u=0;
	int new_streak=0;
	while (u<=gun){
		
		if (day[u]>avg){
			streak++;
			if(streak_highest<streak){
				streak_highest=streak;
			}
		}
		else{
			streak=0;
		}
		u++;
	}
	if (streak>streak_highest){
		cout<<"Hotter day streak is : " <<streak <<endl;
	}
	else {
		cout<<"Hotter day streak is : " <<streak_highest <<endl;
	}
	return 0;
}

