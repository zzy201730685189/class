#include<iostream>
using namespace std;

class number
{
public:
virtual void print(){};
virtual void add(){};
virtual void mul(){};
};
class realnumber:public number
{
public:
void print(){cout<<a<<endl;};
void add(){cout<<a+b<<endl;};
void mul(){cout<<a*b<<endl;};
realnumber(double q,double w){a=q;b=w;};
double a; double b;
};
class integernumber:public number
{
public:
void print(){cout<<a<<endl;};
void add(){cout<<a+b<<endl;};
void mul(){cout<<a*b<<endl;};
integernumber(int q,int w){a=q;b=w;};
int a; int b;
};

