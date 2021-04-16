/**
 * @file errvals
 * @brief simple bash library, suitable for science research
 * containing sw tools to be used in the P/L experiments
 * onboard the ESA/JAXA BepiColombo space mission 
 * http://sci.esa.int/bepicolombo
 * @copyright (C) 2021 GPL 3 free software license 
 * @author Francesco Lazzarotto (INAF - OAPD) Francesco.lazzarotto@inaf.it
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version. (GPL-2.0-or-later)
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 * library definition to be sourced from a main program/script
 */
#ifndef ERRVALS_H
#define ERRVALS_H
#define EX_OK  	      0	/** successful termination */
#define EX_SYNERR     2	/** syntax error */

#define EX__BASE     64	/** base value for error messages */
#define EX_USAGE     64	/** command line usage error */
#define EX_DATAERR   65	/** data format error */
#define EX_NOINPUT   66	/** cannot open input */
#define EX_NOUSER    67	/** addressee unknown */
#define EX_NOHOST    68	/** host name unknown */
#define EX_UNAVAILABLE  69	/** service unavailable */
#define EX_SOFTWARE  70	/** internal software error */
#define EX_OSERR     71	/** system error (e.g., can't fork) */
#define EX_OSFILE    72	/** critical OS file missing */
#define EX_CANTCREAT 73	/** can't create (user) output file */
#define EX_IOERR     74	/** input/output error */
#define EX_TEMPFAIL  75	/** temp failure; user is invited to retry */
#define EX_PROTOCOL  76	/** remote error in protocol */
#define EX_NOPERM    77	/** permission denied */
#define EX_CONFIG    78	/** configuration error */
#define EX__MAX      79	/** maximum listed value */
/** mendel cooper abs guide example exit codes */
#define EX_BADARGS      85         /** Wrong number of arguments */
#define EX_ARGSLIMITS   86      /** an argument is out of allowed limits */
#define EX_UNSUPPORTED  87     /** unsupported system */
/** system exit values */
#define EX_DENIED    126      /** permission denied */
#define EX_NOFILE    127     /** file not present */
#define EX_SEGFAULT  139     /** access to not allowed memory */

/** @brief gives the error message in function of the error code */
void error_what(int eid);
#endif //ERRVALS_
