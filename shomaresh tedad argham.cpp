#include<iostream>
#include<conio.h>
using namespace std;
main(){
	double a;
	cin>>a;
	int counter;
	
	while(a!=0){
	   a=a/10;
	   
	   counter++;	
	}
	
	cout<<counter;
	
	getch();
}
