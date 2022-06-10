#include<iostream>
#include<conio.h>
using namespace std;
main(){
	
	int a[5];
	int max=0,counter=0;
	for(int i=0;i<=4;i++){
		cin>>a[i];
	}
	for(int j=0;j<=4;j++){
		
		if(a[j]>max){
		
		max=a[j];
		counter++;
	                }
	}
		cout<<"maximum:"<<"a["<<counter<<"]:"<<max;
	
	
	
	getch();
}
