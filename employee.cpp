#include "employee.h"
#include "printable.h"
#include <iostream>
Employee::Employee()
{

}
void Employee::print() const
{
    std::cout <<  mName << "\n" << mNumbers << "\n" << mAddress << "\n" << mPay << "\n" << mYear << std::endl;
}
