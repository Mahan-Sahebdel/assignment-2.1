#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int a,b;
	cin>>a>>b;
	for(int i=a;;i++){
		if(i%a==0&&i%b==0){
			cout<<i;
			break;
		}
	}
	
	
	
	getch();
}
