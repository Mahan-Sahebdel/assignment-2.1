#include<iostream>
#include<conio.h>
using namespace std;
class sum{
	int x,y;
	public:
    sum(int a,int b){
    	x=a;
    	y=b;
    	
	}
    void plus(){
		cout<<x+y;
	}
	
    
		
};
int main(){
	int a,b;
	cout<<"enter two numbers to sum:";
	cin>>a>>b;
	sum obj(a,b);
	obj.plus();
	
}
