#include<iostream>
#include<conio.h>
using namespace std;
class area{
	public:
		int a,b;
		void get(){
			cout<<"enter dimentions:";
			cin>>a>>b;
		}
		int f(){
			
			return a*b;
		}
};
main(){
	area *p;
	area obj;
	p=&obj;
	
	p -> get();
	cout<<p -> f();
	
	
}
