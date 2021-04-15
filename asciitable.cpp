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

ASCIITable::ASCIITable(const char* infile,int nrows, int ncols)
{
    rows = nrows;
    cols = ncols;
    rowcount = 0;
    buffer = (char *)malloc(bufsize * sizeof(char));
    if( buffer == NULL)
    {
        perror("Unable to allocate buffer");
        exit(1);
    }
    ifname = (char *)infile;
    ifp=fopen(ifname, "r");
	while (nchar != EOF)
    	{
	        nchar = getline(&buffer,&bufsize,ifp);
		if (nchar==EOF) break;
            ret = parserow(buffer, ncols+1);
	    	fprintf(stderr,"ASCIITable() %zu characters read.\n",nline);
	    	fprintf(stderr,"ASCIITable() row#%d='%s'\n",nline++,buffer);
        }
        fclose(ifp);
        free(buffer);
    if (ret > 0 ){
        fprintf(stderr, "%s.ASCIITable::ASCIITable() all ok\n", "testkdcpp");
    } else {
        fprintf(stderr, "%s.ASCIITable::ASCIITable() error\n", "testkdcpp");
    }

}

ASCIITable::ASCIITable(int nrows, int ncols)
{
    rows = nrows;
    cols = ncols;
}

ASCIITable::~ASCIITable()
{

}


int ASCIITable::read(const FILE *inf)
{
    return 0;
}

int ASCIITable::dump()
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
    return 0;
}

int ASCIITable::parserow(char *mybuffer, int mncols){
                fprintf(stderr,"parserow() START\n");
                cc=0; fcharcount=0;colcount=0;
                fbuffer = (char *)malloc(bufsize * sizeof(char));
                while( mybuffer[cc] != RS ){ /* while characters of the row */
                        if ( (mybuffer[cc] != FS) ){
                                temp[fcharcount] = mybuffer[cc];
                                fcharcount++;
                        } else {
                                fprintf(stderr,"parserow() %s%c ", temp, OFS);
                                fprintf(stderr,"temp =%s atof:%lf ", temp, atof(temp));
                                data[nline][colcount]=atof(temp);
                                 strcpy(temp,    "               \0");
//                                 strcpy(mybuffer,"               \0");
                                colcount++;
                                fcharcount=0;
                        }
                        cc++;
                }
                data[nline][colcount]=atof(temp);
                strcpy(temp,    "               \0");
                fprintf(stderr,"%c%c", '\r',ORS);
                colcount++;
                free(fbuffer);
                fprintf(stderr,"parserow() STOP\n");
}
