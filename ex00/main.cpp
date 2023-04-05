#include "adder.hpp"

int main(int argc, char **argv)
{
    uint32_t lval = atof(argv[1]);
    uint32_t rval = atof(argv[2]);

    std::cout << "lval: " << lval << std::endl;
    std::cout << "rval: " << rval << std::endl;
    Adder adder(lval, rval);
    Adder adder1(0, 0);

    if (argc != 3)
        return EXIT_FAILURE;
    else
    {
        //std::cout << "sizeof a" << (size_t) sizeof(adder.getlval()) << std::endl;
        //std::cout << "sizeof b" << (size_t) sizeof(adder.getrval()) << std::endl;
        std::cout << "lval: " << adder.getlval() << std::endl;
        std::cout << "rval: " << adder.getrval() << std::endl;
        std::cout << "RES : " << static_cast<int32_t> (adder.add(lval, rval)) << std::endl;
        //std::cout << "sum : " << adder1.add(0, INT_MIN) << std::endl;
    }
    return 0;
}