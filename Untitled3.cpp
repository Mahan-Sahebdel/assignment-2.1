#include<iostream>
using namespace std;
char toLowerCase(char ch){
	if(ch<65||ch>90)
	  return ch;
	else
	return ch+32;
	
}
main(){
	char a;
	cout<<"Enter a character: ";
	cin>>a;
	cout<<toLowerCase(a);
	
}


