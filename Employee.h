#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee
{
    public:
        Employee(string name);
        void setlevel(int newlevel);
        void setcount(int newcount);
        string getname();
        int getlevel();
        virtual int getsalary() const;
        virtual ~Employee();
    protected:
        string name;
        int count;
        int level;
    private:

};

#endif // EMPLOYEE_H
