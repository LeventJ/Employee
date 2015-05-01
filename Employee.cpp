#include "Employee.h"


Employee::Employee(string name): name(name) {}

void Employee::setlevel(int newlevel)
{
    level =newlevel;
}
void Employee::setcount(int newcount)
{
    count = newcount;
}
string Employee::getname()
{
    return name;
}
int Employee::getlevel()
{
    return level;
}
int Employee::getsalary() const
{
    return count*500+level*1000;
}
Employee::~Employee()
{
    //dtor
}
