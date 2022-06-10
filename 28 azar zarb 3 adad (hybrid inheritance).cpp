#include<iostream>
using namespace std;
class a{
	public:
		int x;
		void geta(){
			cout<<"enter a number:";
			cin>>x;
		}
		
};
class b:public a{
	public:
		int y;
		void getb(){	
		cout<<"enter a number:";
		cin>>y;
		}
};
class c{
	public:
	int z;
	void getc(){
		cout<<"enter a number:";
		cin>>z;
	}
};
class d:public b,public c{
	public:
		
	int zarb(){
		return x*y*z;
		
	}
};
main(){
	d obj;
	obj.geta();
	obj.getb();
	obj.getc();
	cout<<obj.zarb();
}
