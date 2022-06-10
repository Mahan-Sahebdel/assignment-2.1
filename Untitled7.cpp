#include<iostream>
#include<conio.h>
using namespace std;
class shape{
	public:
		float a,b;
		void get(){
			cout<<"enter dimentions:";
			cin>>a>>b;
		
		}
			
};
class mosalas: public shape{
	
	public:
	void area1(){
		cout<<"masahat mosalas:"<<(a*b)/2<<endl;
	}
};
class mostatil : public shape{
	public:
		void area2(){
		cout<<"masahat mostatil :"<<(a*b);
	}
};
int main(){
	
	mostatil obj2;
	mosalas obj1;
	obj1.get();
	obj2.get();
	obj1.area1();
	obj2.area2();
}
