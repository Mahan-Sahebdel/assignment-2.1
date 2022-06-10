#include<iostream>
#include<conio.h>
using namespace std;
float f(int);
main(){
	
	int a;
	cin>>a;
	cout<<f(a);
	
	
	getch;
}
float f(int x){
	float sum=0,k;
	k=1;
	for(int i=1;i<=x;i++){
		sum+=(k/i);
		k=-k;
	
		
		
	}
	return sum;
	
	
}
