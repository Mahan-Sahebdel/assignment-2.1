#include<iostream>
using namespace std;
class base{
	public:
		int a;
		void geta(){
			cout<<"enter a number:";
			cin>>a;
		}
};
class derived:public base{
	public:
		int b;
		void getb(){
			cout<<"enter a number:";
			cin>>b;
			
		}
		int sum(){
			return a+b;
		}
};
main(){
	base *bptr;
	derived obj;
	bptr=&obj;
	((derived *)bptr) ->geta();
	((derived *)bptr) ->getb();
	cout<<((derived *)bptr) ->sum();
	
	
}
