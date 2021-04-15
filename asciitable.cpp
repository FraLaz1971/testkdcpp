/*
 * <one line to give the program's name and a brief idea of what it does.>
 * Copyright (C) 2021  Francesco Lazzarotto <francesco.lazzarotto@iaps.inaf.it>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "asciitable.h"


ASCIITable::ASCIITable()
{

}

ASCIITable::ASCIITable(int nrows, int ncols)
{
    rows = nrows;
    cols = ncols;
}

ASCIITable::~ASCIITable()
{

}

void ASCIITable::dump()
{
    int i,j;
    cerr << "ASCIITable::dump() execution START"<< endl;
    for (i=0; i<rows; i++){
        for (j=0; j<cols; j++){
            cerr << "ASCIITable::dump() data("<< i << "," << j << ")"<< \
            "="<< data[i][j] << endl;        
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
    cerr << "ASCIITable::dump() execution STOP"<< endl;
}
