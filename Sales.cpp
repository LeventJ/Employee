#include "Sales.h"

Sales::Sales(string name) : Employee(name) {}

int Sales::getsalary() const
{
    return count*800+level*800;
}
Sales::~Sales()
{
    //dtor
}
