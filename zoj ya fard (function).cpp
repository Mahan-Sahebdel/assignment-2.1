#include<iostream>
#include<conio.h>
using namespace std;
int f(int x){
   if(x%2==0){
   	return 0;
   }
	else 
	return 1;
	
}
main(){
	
  int a;
  cin>>a; 
  if(f(a)){
  	cout<<"fard";
  }
  else 
  cout<<"zoj";
	
	
	
	
	
	
	getch();
}
