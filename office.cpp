#include "office.h"
#include <iostream>

Office::Office()
{

}

void Office::print() const
{
    std::cout << mOfficeName << "\n" << mAddress << "\n" << mArea << "\n" << mPersons << std::endl;
}
