//#define DEBUG
#ifndef _SPRPCK_H_
#define _SPRPCK_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <fcntl.h>
#include <stdint.h>

#ifdef UNIX
#  include <unistd.h>
#endif

#ifdef MSDOS
#  include <io.h>
#  include <sys\stat.h>
#endif

#ifndef O_BINARY
#  define O_BINARY 0
#endif

//*****************************************************************************
// VISUAL STUDIO I/O COMPATIBLITY
#ifdef _MSC_VER
#pragma warning (disable : 4996) // For deprecated function names (open, etc.)
#include <corecrt_io.h>
#endif
//*****************************************************************************

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
#define BYTE uint8_t
#ifndef UINT
#  define UINT int
#endif
#undef USHORT
#define USHORT uint16_t

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
#define PCX_DATA   128

#define BLINTEL(a,b) (*(a+b)+(*(a+b+1)<<8))

#ifndef _MAIN_
extern int verbose;
#endif

#endif /* _SPRPCK_H_ */
