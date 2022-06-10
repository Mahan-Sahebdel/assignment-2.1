#include<iostream>
#include<conio.h>
using namespace std;
class circle{
	public:
	float area(int x){
		return 3.14*x*x;
	}
};
main(){
	
	int a;
	cout<<"enter the radius";
	cin>>a;
	circle c;
	cout<<c.area(a);
}
