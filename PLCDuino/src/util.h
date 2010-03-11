/*
 * util.h
 *
 *  Created on: 12/10/2009
 *      Author: Renato
 */

#ifndef UTIL_H_
#define UTIL_H_

#define BOOL 	unsigned char
#define BYTE	unsigned char
#define TRUE	1
#define FALSE	0
#define ERROR	-1
#define MAXSTR	255
#define MAXBUF	1000

void doAbort(const char *msg);
int getBit(int by, int bit);
int setBit(int *by, int bit);
int resetBit(int *by, int bit);
int modBit(int *by, int bit, BOOL value);


#endif /* UTIL_H_ */
