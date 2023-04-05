#ifndef ADDER_HPP
# define ADDER_HPP

# include <iostream>
# include <cstdlib>
# include <limits.h>

class Adder
{
    public:
        Adder(uint32_t a, uint32_t b);
        ~Adder();
        uint32_t getlval() const;
        uint32_t getrval() const;
        uint32_t add(uint32_t a, uint32_t b) const;
        void setlval(uint32_t a);
        void setrval(uint32_t b);
    private:
        int _a;
        int _b;
};

#endif