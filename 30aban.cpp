#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class code{
int length;
char *name;
public:
code(){
length =0;
name =new char[length+1];
}

code(char *s){
length=strlen(s);
name =new char[length+1];
strcpy(name , s);
}

void connect(code &a , code &b){
length = a.length + b.length;
delete name;
name = new char[length+1];

strcpy(name, a.name);
strcat(name, b.name);
}
void display(){
cout<<name<<endl;
}
};

int main()
{
char *F = "John ";
code name1(F), name2("Antoney "), name3("Oliver ");
code o1, o2;
o1.connect(name1 , name2);
o2.connect(o1, name3);

name1.display();
name2.display();
name3.display();
o1.display();
o2.display();

return 0;
}


