#include <iostream>
#include "asciitable.h"
#include "defines.h"
using namespace std;

int main(int argc, char **argv)
{
    std::cout << "Hello, world!" << std::endl;
    char * fn = (char *)"table.asc";
    ASCIITable *at = new ASCIITable(fn,3,3);
    //ASCIITable *at = new ASCIITable();
    at->dump();
    return 0;
}
