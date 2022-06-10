#include<iostream>
#include<conio.h>
using namespace std;
main(){
	double sum=0;
	for(int i=1;i<=10;i++){
		if(i%2==1)
			sum+=1.0/i;
			else
			sum-=1.0/i;
		 
	
		
	}
	cout<<sum;
	
	
	
	
	
	
	
	
	
	getch();
}
