#include"class.h"

int main()
{
number *p =new realnumber(1.1,1.1);
p->print();
p->add()；
p->mul();
delete p;

p =new integernumber(1,1);
p->print();
p->add()；
p->mul();
delete p;

return 0;



}
