#include<iostream>
using namespace std;
class number{
	int a;
	public:
		
		int pow(){
			return a*a;
		}
};
class square:public number{
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
	number o1;
	square o2;
	cube o3;
	o2.get();
	cout<<o2.pow()<<endl;
	
	o3.get();
	cout<<o3.pow();
	
}
