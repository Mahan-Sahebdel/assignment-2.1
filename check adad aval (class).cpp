#include<iostream>
#include<conio.h>
using namespace std;
class prime{
   public:
   int check(int a){
   	for(int i=2;i<=a/2;i++){
   		if(a%i==0){
   			return 1;
		   }
		   else{
		   	return 0;
		   }
	   }
   }
   void display(int x){
   	if(check(x)){
   		cout<<"aval nist";
	   }
	   else{
	   	cout<<"aval";
	   }
   }
};
main(){
	int y;
	cout<<"enter a number:";
	cin>>y;
	prime c;
	c.check(y);
	c.display(y);
}
