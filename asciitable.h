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
#include <cstdlib>
#include <cstring>
#include "errvals.h"
using namespace std;
#define LMAXSIZE 64 /* max allowed line length */
#define FSIZE 16     /* max allowed number of characters in a field (cell) include '\0' */
#define FMAX 16      /* max allowed number of fields (columns) in a row */
#define RMAX 16      /* max allowed number of records (rows) in a file */
#define RS '\n'     /* (input) record (row) separator */
#define FS ' '     /* (input) field (column) separator */
#define ORS '\n'     /* output record (row) separator */
#define OFS ','     /* output field (column) separator */

/**
 * @todo write docs
 */
class ASCIITable
{
public:
    
    /**
     * @todo write docs
     */
    ASCIITable(const char* infile,int nrows, int ncols);
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
    int read(const FILE *inf);
    /**
     * @todo write docs
     */
    int dump();
    /**
     * @todo write docs
     */
    int parserow(char *mybuffer, int mncols);
    
    float data[256][256];
    int rows;
    int cols;
    char *buffer;
    char *ifname;
    FILE *ifp; 
    int ret; 
    int nline=0;
    int colcount=0;
    int rowcount=0;    
    size_t nchar=0;
    FILE *ptr;  /* Pointer to the data file. FILE is a structure defined in <stdio.h> */
    FILE *mptr; /* Pointer to the metadata file. FILE is a structure defined in <stdio.h> */
    int c; /* Character read from the file. */
    int cc;  /* cc: chars counter */
    int totlines; /* saves the total n. of lines read */
    int totchars; /* saves the total n. of chars read */
    char *field;     /* file table array */
    int fcharcount;  /* field char counter*/
    int ff=0; /* flag goes 1 when a row field is found*/
    char temp[FSIZE];
    char *fbuffer; /* buffer containing the chars of one column field read from file*/
    size_t bufsize = LMAXSIZE; /* max. size of char buffer */
    size_t characters;

};

#endif // ASCIITABLE_H
