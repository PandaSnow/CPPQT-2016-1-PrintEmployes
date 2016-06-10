#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "printable.h"
#include <string>

class Employee:public Printable
{
public:
    Employee();
    void setName (std::string name)
    {
    mName=name;
    }
    void setNumbers (std::string numbers)
    {
    mNumbers=numbers;
    }
    void setAddress (std::string address)
    {
    mAddress=address;
    }
    void setPay (int pay)
    {
    mPay=pay;
    }
    void setYear (int year)
    {
    mYear=year;
    }
    void print() const override;

private:

    std::string mName;
    std::string mNumbers;
    std::string mAddress;
    int mPay;
    int mYear;

};

#endif // EMPLOYEE_H
