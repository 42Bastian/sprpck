//#define DEBUG
 

#include <stdio.h>
#include <stdlib.h>
#ifdef UNIX
#  include <fcntl.h>
#endif

#include <stdarg.h>
#include <string.h>

#ifdef UNIX
#  include <unistd.h>
#endif

#ifdef MSDOS
#  include <io.h>
#  include <sys\stat.h>
#  include <fcntl.h>
#endif

#ifndef O_BINARY
#  define O_BINARY 0
#endif

/* input types */
#define TYPE_RAW4  0
#define TYPE_RAW8  1
#define TYPE_SPS   2
#define TYPE_PCX   3
#define TYPE_RAW1  4
#define TYPE_PI1   5
#define TYPE_BMP   6


/* color-table output */
#define C_HEADER   0
#define ASM_SRC    1
#define LYXASS_SRC 2

#undef BYTE
#define BYTE unsigned char
#ifndef UINT
#  define UINT int
#endif
#undef USHORT
#define USHORT unsigned short


/* PCX - offsets */
#define PCX_MAGIC    0  /* must be 10 */
#define PCX_VERSION  1  /* must be 5 => color palette */
#define PCX_ENC      2  /* must be 1 => RLE */
#define PCX_BPP      3  /* bytes per pixel : 4 or 8 */
#define PCX_XMIN     4
#define PCX_YMIN     6
#define PCX_XMAX     8  /* width  = xmax-xmin+1 */
#define PCX_YMAX    10  /* height = ymax-ymin+1 */
#define PCX_HDPI    12
#define PCX_VDI     14
#define PCX_RGB     16
#define PCX_RES     64
#define PCX_PLANES  65  /* must be 1 */
#define PCX_BPL     66
#define PCX_PAL     68  /* must be 1 */
#define PCX_DATA    128

#define BLINTEL(a,b) (*(a+b)+(*(a+b+1)<<8))

#ifndef _MAIN_
extern int verbose;
#endif
