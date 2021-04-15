#include <iostream>
#include "asciitable.h"
#include "defines.h"

int main(int argc, char **argv)
{
    if (argc == 4){
    char * fn = argv[1];
    ASCIITable *at = new ASCIITable(fn,atoi(argv[2]),atoi(argv[3]));
    // ASCIITable *at = new ASCIITable();
    // at->ifp = fopen(fn, "r");
    // at->read(at->ifp);
     at->dump();
    // fclose(at->ifp);
    return 0;
    } else {
        std::cerr << "usage:"<<argv[0]<< " <infile> <nrows> <ncols>"<< std::endl;
        return EX_BADARGS;
    }
}
