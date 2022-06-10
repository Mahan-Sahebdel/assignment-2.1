#include<iostream>
#include<math.h>
using namespace std;
class number{
	int a;
	public:
		void get(int i){
			a=i;
		}
		friend int p(number);
};
int p(number obj){
	
	return (obj.a)*(obj.a);
}
main(){
	int b;
	cin>>b;
	number obj;
	obj.get(b);
	
	cout<<p(obj);
}
