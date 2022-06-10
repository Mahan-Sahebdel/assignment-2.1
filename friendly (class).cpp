#include<iostream>
using namespace std;

class sample{
int a, b;

public:
void setvalue(){
a=20;
b=30;
}

friend float mean(sample s){
return float(s.a + s.b)/2;
}
};

int main(){
sample obj;
obj.setvalue();

cout<<" Mean value = "<<mean(obj)<<endl;

return 0;
}
