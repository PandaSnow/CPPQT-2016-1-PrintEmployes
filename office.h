#ifndef OFFICE_H
#define OFFICE_H

#include "printable.h"
#include <string>

class Office : public Printable
{
public:
    Office();
    void setOfficeName (std::string officeName)
    {
    mOfficeName=officeName;
    }
    void setAddress (std::string address)
    {
    mAddress=address;
    }
    void setArea (int area)
    {
    mArea=area;
    }
    void setPersons (int persons)
    {
    mPersons=persons;
    }
    void print() const override;

private:
    std::string mOfficeName;;
    std::string mAddress;
    int mArea;
    int mPersons;
};

#endif // OFFICE_H
