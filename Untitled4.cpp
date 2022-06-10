#include<iostream>
using namespace std;
class number{
	int a;
	public:
		
		int pow(){
			return a*a;
		}
};
class square: public number{
	int a;
	public:
		square(int x){
			a=x;
		}
	    
		int pow(){
			return a*a;
		}
};
class cube:public number{
	int b;
	public:
		cube(int y){
			b=y;
		}
		int pow(){
			return b*b*b;
		}
		
};
main(){
	int a,b;
	number *p;
	
	;
	cout<<"enter a number:";
	cin>>a;
	square o2(a);
	p=&o2;
	
	cout<<((square*)p)->pow()<<endl;
	
	cout<<"enter a number:";
	cin>>b;
	cube o3(b);
	p=&o3;
	
	cout<<((cube*)p)->pow();
	
}
