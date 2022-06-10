#include<iostream>
using namespace std;
class m{

public:
int x,y,z;
m(int a=0,int b=0){
x=a;
y=b;
}
friend m sum(m );
void display(m c){
cout<<c.z;
}


};
m sum(m o1){
m ob;
ob.z=o1.x + o1.y;
return ob;
}
int main(){
int a,b;
m obj;
cout<<" plz enter 2 num:";
cin>>a>>b;

obj.x=a;
obj.y=b;
cout<< "x ="<<obj.x<<" y = "<<obj.y<<endl;

m c;

c=sum(obj);
c.display(c);
return 0;
}
