#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int counter=0,i;
	float nomre[5],sum;
	for(i=0;i<=4;i++){
		cin>>nomre[i];
		if(nomre[i]>=15){
			sum+=nomre[i];
			counter++;
		}
	}
	
	cout<<"avg:"<<(sum/counter);
	
	
	
	
	
	
	
	getch();
}
