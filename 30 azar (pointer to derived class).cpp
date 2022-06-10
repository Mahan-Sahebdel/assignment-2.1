//poimter to Derived Class
#include<iostream>
using namespace std;

class Base{
public:
int b;
void show(){
cout<<"b = "<<b<<endl;
}
};
class Derived: public Base{
public:
int d;
void show(){
cout<<"b = "<<b<<endl;
cout<<"d = "<<d<<endl;
}
};

int main(){
Base *bptr;
Base obj_b;
bptr = &obj_b;

bptr ->b =100;
cout<<"Base pointer:\n";
bptr -> show();

Derived obj_d;
bptr = &obj_d;
bptr ->b =200;
//bptr ->d =500;

cout<<"point to Derived class with Base Pointer: \n";
bptr -> show(); //pointer points to derived object

Derived *dptr; //Derived pointer
dptr = &obj_d;
dptr -> d= 750;
cout<<"Derivrd pointer: \n";
dptr ->show();

cout<<"using ((Derived *) bptr): \n ";
((Derived *) bptr) -> d=450;
((Derived *) bptr) ->show();
}
