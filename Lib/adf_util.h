#ifndef _ADF_UTIL_H
#define _ADF_UTIL_H 1

/*
 *  ADF Library. (C) 1997-2002 Laurent Clevy
 *
 *  adf_util.h
 *
 *  $Id$
 *
 *  This file is part of ADFLib.
 *
 *  ADFLib is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  ADFLib is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Foobar; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#include"prefix.h"

#include "adf_str.h"


void swLong(unsigned char* buf, unsigned long val);
void swShort(unsigned char* buf, unsigned short val);

PREFIX struct List* newCell(struct List* list, void* content);
PREFIX void freeList(struct List* list);
void adfDays2Date(long days, int *yy, int *mm, int *dd);
BOOL adfIsLeap(int y);
    void
adfTime2AmigaTime(struct DateTime dt, long *day, long *min, long *ticks );
    struct DateTime
adfGiveCurrentTime( void );

void dumpBlock(unsigned char *buf);

/*##########################################################################*/
#endif /* _ADF_UTIL_H */

