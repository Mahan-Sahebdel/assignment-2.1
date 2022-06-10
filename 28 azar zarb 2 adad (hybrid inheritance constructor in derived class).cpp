#include<iostream>
using namespace std;
class base1{
	public:
		virtual void show(){
			cout<<"base"<<endl;
		}
	
};
class d:public base1{
	public:
		void show(){
			cout<<"derived";
		}
		
};
main(){
    base1 obj;
    base1 *p;
    p=&obj;
    p->show();
    
    d obj1;
    p=&obj1;
    p->show();
	
}
