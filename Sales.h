#ifndef SALES_H
#define SALES_H
#include "Employee.h"
#include <string>
class Sales : public Employee{
    public:
        Sales(string name);
        int getsalary() const override;
        virtual ~Sales();
    protected:
    private:
};

#endif // SALES_H
