#include "adder.hpp"

Adder::Adder(uint32_t a, uint32_t b) : _a(a), _b(b)
{
}

Adder::~Adder()
{
}

uint32_t Adder::getlval() const
{
    return this->_a;
}

uint32_t Adder::getrval() const
{
    return this->_b;
}

void Adder::setlval(uint32_t a)
{
    this->_a = a;
}

void Adder::setrval(uint32_t b)
{
    this->_b = b;
}

uint32_t Adder::add(uint32_t a,uint32_t b) const
{
    /*
    if (a == 4294967295 || b == 4294967295)
    {
        std::cerr << "Overflow" << std::endl;
        exit(EXIT_FAILURE);
    }
    */
    //Adder adder(a, b);
    if (b == 0)
         return a;
     if (a == 0)
         return b;
    uint32_t sum = a ^ b;
    //std::cout << "sum: " << sum << std::endl;
    uint32_t carry = (a & b) << 1;
    //std::cout << "carry: " << carry << std::endl;
    if (sum >= 4294967295 || carry >= 4294967295)
    {
        std::cout << "sum is : " << static_cast< int32_t>(sum) << std::endl;
        std::cout << "carry is : "<< static_cast<int32_t>(carry) << std::endl;
        //return carry;
    }
    return add(sum,carry);
}