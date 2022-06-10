#include<iostream>
using namespace std;

class parent{

protected:
int id_protect;
};

class child : public parent{
public:
void setID(int id)
{
id_protect = id;
}
void display()
{
cout<<"Protected ID id : "<<id_protect;
}

};

int main()
{
child obj;
obj.setID(100);
obj.display();

return 0;
}
