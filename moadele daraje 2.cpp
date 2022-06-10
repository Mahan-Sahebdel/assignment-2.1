#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
float equation(int,int,int);
main(){
	
	int x,y,z;
	cin>>x>>y>>z;
	equation(x,y,z);
	
	
	
	
	
	
	
	
	getch();
}
float equation(int a,int b,int c){
	float delta;
	delta=pow(b,2)-(4*a*c);
	if(delta<0){
	
		cout<<"no root";
	}
		
	
	else { 
	cout<<"root 1:"<<(-b-sqrt(delta))/2*a<<endl;
	cout<<"root 2:"<<(-b+sqrt(delta))/2*a;
    }
	
	
	
}
