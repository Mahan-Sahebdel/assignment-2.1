#include<iostream>
using namespace std;
class number{
	int a;
	public:
		
	virtual	int pow(){
			return a*a;
		}
};
class square: public number{
	int a;
	public:
		void get(){
			cout<<"enter number:";
			cin>>a;
		}
	    
		int pow(){
			return a*a;
		}
};
class cube:public number{
	int b;
	public:
		void get(){
			cout<<"enter number:";
			cin>>b;
		}
		int pow(){
			return b*b*b;
		}
		
};
main(){
	number *p;
	square o2;
	p=&o2;
	p->get();
	cout<<p->pow()<<endl;
	
	cube o3;
	p=&o3;
	p->get();
	cout<<p->pow();
	
}
