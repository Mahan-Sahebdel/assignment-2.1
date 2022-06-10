#include<iostream>
#include<conio.h>
using namespace std;
main(){
  float a[5],max=0,second=0;
  int i;
  for(i=0;i<=4;i++){
  	cin>>a[i];
  	if(a[i]>max){
  		second=max;
  		max=a[i];
	  }
  }
  
	cout<<"2nd:"<<second;
	
	getch();
}
