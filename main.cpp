#include <iostream>
#include "Employee.h"
#include "Sales.h"
using namespace std;

int main()
{
    Employee emp("Tom");
    Sales sal("Jerry");

    emp.setlevel(2);
    sal.setlevel(3);

    emp.setcount(200);
    sal.setcount(200);

/**
 * Employer 的 Salary 计算方式：count*500+level*1000
 * Sales 的 Salary 计算方式：count*800+level*800;
 */

    cout<<"Employer:"<<emp.getname()<<"  level:"<<emp.getlevel()<< "  salary:"<<emp.getsalary()<<endl;
    cout<<"Sales:"<<sal.getname()<<"  level:"<<sal.getlevel()<<"  salary:"<<sal.getsalary()<<endl;
    return 0;
}
