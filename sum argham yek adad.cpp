#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int a,b,sum;
	cin>>a;
	while(a!=0){  // 123 
		b=a%10;
		a=a/10;
		
		sum+=b;
		
		
		
	}
	cout<<sum;
	
	getch();
}
