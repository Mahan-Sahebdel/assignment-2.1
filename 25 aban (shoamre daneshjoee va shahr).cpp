#include<iostream>
#include<string>
using namespace std;
class name{
public:
string n;
int x;
name(string a=" ",int b=0){
n=a;
x=b;
}
name daneshjoo(name o1){
name o2;
o2.x=x;
o2.n=n;
return o2;
}
};
int main(){
string d;
int e;
cout<<"name:";
cin>>d;
cout<<"shomare daneshjooei:";
cin>>e;
name obj(d,e);
name obj2;
obj2=obj.daneshjoo(obj);
cout<<"name:"<<obj2.n<<endl<<"shomare daneshjooei:"<<obj2.x;

}
