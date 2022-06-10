#include<iostream>
#include<conio.h>
using namespace std;
int max(int,int,int);
main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"maximum:"<<max(a,b,c);
	
	getch();
}
int max(int x,int y,int z){
	int max=x;
	if(y>max)
	
		max=y;
	
	
	if(z>max)
		max=z;
	
	
	return max;
	
}

