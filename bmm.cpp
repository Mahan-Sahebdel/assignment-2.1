#include<iostream>
#include<conio.h>
using namespace std;
main(){
	
	int a,b;
	cin>>a>>b;
	int bmm;
	for(int i=1;i<=a;i++){
		if(a%i==0&&b%i==0){
			bmm=i;
		}
	}
	
	cout<<bmm;
	
	
	
	
	
	
	getch();
}
