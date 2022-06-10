#include<iostream>
using namespace std;
class base{
	protected:
		int a,b;
	public:
		
		base(int x,int y){
			a=x;
			b=y;
		}
		virtual void area(){
			
		}
};
class rec:public base{
	public:
	rec(int a,int b):base(a,b){
	}
	void area(){
		cout<<"area of rec: "<<(a*b)/2<<endl;
	}
};
class sqr:public base{
	public:
	sqr(int c):base(c){
	}
	void area(){
		cout<<"area of square: "<<a*a;
	}
};
main(){
	int a,b;
	
	cout<<"enter rec dimentions:";
	cin>>a>>b;
	base *p;
	
	rec obj1(a,b);
	p=&obj1;
	p->area();
	
	int c,d;
	cout<<"enter square dimentions: ";
	cin>>c;
	sqr obj2(c);
	p=&obj2;
	p->area();
	
}
