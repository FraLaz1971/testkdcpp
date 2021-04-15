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

#ifndef ASCIITABLE_H
#define ASCIITABLE_H
#include <cstdio>
#include <iostream>
using namespace std;
/**
 * @todo write docs
 */
class ASCIITable
{
public:
    /**
     * @todo write docs
     */
    ASCIITable();

    /**
     * @todo write docs
     */
    ASCIITable(int nrows, int ncols);
    /**
     * @todo write docs
     */
    ~ASCIITable();

    /**
     * @todo write docs
     */
    void dump();

    float data[256][256];
    int rows;
    int cols;
};

#endif // ASCIITABLE_H
