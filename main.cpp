#include <iostream>
#include "asciitable.h"
using namespace std;

int main(int argc, char **argv)
{
    std::cout << "Hello, world!" << std::endl;
    ASCIITable *at = new ASCIITable(2,3);
    at->dump();
    return 0;
}
