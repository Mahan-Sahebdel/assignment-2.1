#include<iostream>
#include<conio.h>
using namespace std;
main(){
	
	int a[15];
	int f[10]={0};
	for(int i=0;i<=14;i++){
		cin>>a[i];
		f[a[i]]++;
	}
	
	for(int k=0;k<=9;k++){
		
		cout<<k<<":"<<f[k]<<endl;
	}
	
	
	
	
	getch();
}
