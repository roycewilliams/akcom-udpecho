/*
 *  Alaska Communications UDP Echo Tools
 *  Copyright (C) 2020 Alaska Communications
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are
 *  met:
 *
 *     1. Redistributions of source code must retain the above copyright
 *        notice, this list of conditions and the following disclaimer.
 *
 *     2. Redistributions in binary form must reproduce the above copyright
 *        notice, this list of conditions and the following disclaimer in the
 *        documentation and/or other materials provided with the distribution.
 *
 *     3. Neither the name of the copyright holder nor the names of its
 *        contributors may be used to endorse or promote products derived from
 *        this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 *  IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 *  THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 *  PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
 *  CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 *  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 *  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 *  PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 *  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 *  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 *  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/**
 *  @file akcom-udpecho.c UDP echo client
 */
/*
 *  Simple Build:
 *     export CFLAGS='-Wall -Wno-unknown-pragmas'
 *     gcc ${CFLAGS} -c akcom-udpecho.c
 *     gcc ${CFLAGS} -o akcom-udpecho akcom-udpecho.o
 *
 *  Libtool Build:
 *     export CFLAGS='-Wall -Wno-unknown-pragmas'
 *     libtool --mode=compile --tag=CC gcc ${CFLAGS} -c akcom-udpecho.c
 *     libtool --mode=link    --tag=CC gcc ${CFLAGS} -o akcom-udpecho \
 *             akcom-udpecho.lo
 *
 *  Libtool Clean:
 *     libtool --mode=clean rm -f akcom-udpecho.lo akcom-udpecho
 */
#define _AKCOM_UDP_ECHO_CLIENT_C 1

///////////////
//           //
//  Headers  //
//           //
///////////////
#pragma mark - Headers

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <strings.h>
#include <time.h>
#include <getopt.h>
#include <assert.h>


///////////////////
//               //
//  Definitions  //
//               //
///////////////////
#pragma mark - Definitions


/////////////////
//             //
//  Datatypes  //
//             //
/////////////////
#pragma mark - Datatypes


/////////////////
//             //
//  Variables  //
//             //
/////////////////
#pragma mark - Variables


//////////////////
//              //
//  Prototypes  //
//              //
//////////////////
#pragma mark - Prototypes

// main statement
int main(int argc, char * argv[]);


/////////////////
//             //
//  Functions  //
//             //
/////////////////
#pragma mark - Functions

// main statement
int main(int argc, char * argv[])
{
   if (argc < 0)
      printf("hello %s\n", argv[0]);
   return(0);
}


/* end of source file */
