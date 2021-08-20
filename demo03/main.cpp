#include "swap.h"

int main(int argc, char const *argv[])
{
    swap myswap(10, 20);
    myswap.printInfo();
    myswap.run();
    std::cout << "-----------------------------" << std::endl;
    myswap.printInfo();

    return 0;
}
