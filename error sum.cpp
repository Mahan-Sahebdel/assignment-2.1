#include<iostream>
using namespace std;

class sum{
	private:
		int x,y;
	public:
		int z;
	   sum(int a=0,int b=0){
	   	x=a;
	   	y=b;
	   }
	  
	   friend sum plus(sum obj){
	   	sum ob;
    	ob.z=obj.x+obj.y;
	    return ob;
	   }	
	};
	
int main(){
	int a,b;
	cin>>a>>b;
	sum obj(a,b);
	sum o1;
	o1=plus(obj);
	
	cout<<o1.z;
	
	}
	
