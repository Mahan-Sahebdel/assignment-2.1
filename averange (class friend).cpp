#include<iostream>
class sum1{
public:
float x,y,z;

sum1(float a=0,float b=0){
x=a;
y=b;
}
friend sum1 ave(sum1);
};
sum1 ave(sum1 o1){
sum1 o2;
o2.z=((o1.x)+(o1.y))/2;
return o2;
}
int main(){
float a,b;
cout<<"2 adad vared konid:";
cin>>a>>b;
sum1 obj(a,b);
sum1 obj2;
obj2=ave(obj);
cout<<"ave:"<<obj2.z;
}
