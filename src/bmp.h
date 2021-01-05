#ifndef _BMP_H_
#define _BMP_H_

/** MS Windows SDK wingdi.h **/
#define FAR
#define NEAR

#define WORD  uint16_t
#define DWORD uint32_t
#define LONG  uint32_t

/****** Bitmap support ******************************************************/

/* Bitmap Header structures */
typedef struct tagRGBTRIPLE
{
  BYTE rgbtBlue;
  BYTE rgbtGreen;
  BYTE rgbtRed;
}
#ifdef __GNUC__
  __attribute__((packed))
#endif
  RGBTRIPLE;

typedef RGBTRIPLE FAR* LPRGBTRIPLE;

typedef struct tagRGBQUAD
{
  BYTE rgbBlue;
  BYTE rgbGreen;
  BYTE rgbRed;
  BYTE rgbReserved;
}
#ifdef __GNUC__
  __attribute__((packed))
#endif
  RGBQUAD;
typedef RGBQUAD FAR* LPRGBQUAD;


typedef struct tagBITMAPINFOHEADER{
  DWORD biSize;
  LONG  biWidth;
  LONG  biHeight;
  WORD  biPlanes;
  WORD  biBitCount;
  DWORD biCompression;
  DWORD biSizeImage;
  LONG  biXPelsPerMeter;
  LONG  biYPelsPerMeter;
  DWORD biClrUsed;
  DWORD biClrImportant;
}
#ifdef __GNUC__
  __attribute__((packed))
#endif
  BITMAPINFOHEADER, FAR *LPBITMAPINFOHEADER, *PBITMAPINFOHEADER;


/* constants for the biCompression field */
#define BI_RGB        0L
#define BI_RLE8       1L
#define BI_RLE4       2L
#define BI_BITFIELDS  3L

typedef struct tagBITMAPINFO {
  BITMAPINFOHEADER    bmiHeader;
  RGBQUAD             bmiColors[1];
} BITMAPINFO, FAR *LPBITMAPINFO, *PBITMAPINFO;

typedef struct tagBITMAPFILEHEADER {
  WORD    bfType;
  DWORD   bfSize;
  WORD    bfReserved1;
  WORD    bfReserved2;
  DWORD   bfOffBits;
}
#ifdef __GNUC__
  __attribute__((packed))
#endif
  BITMAPFILEHEADER, FAR *LPBITMAPFILEHEADER, *PBITMAPFILEHEADER;
#endif /* _BMP_H_ */
