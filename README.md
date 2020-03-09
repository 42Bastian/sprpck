# sprpck
-------------------------------
Lynx Sprite Packer Ver 2.0
(c) 1997..2020 42Bastian Schick
                Matthias  Domin
-------------------------------
Usage :
sprpck [-c][-v][-O0][-e#][-s#][-t#][-u][-p#]
[-axxxyyy][-Swwwhhh][-oxxxyyy][-iwwwhhh]
[-rxxxyyy] [-z] in [out]
or
sprpck batchfile
-O0      : do no optimize literal/packed
-e<pen>  : compress until color is only <pen>
-c       : compress color index
-v       : don't be quiet
-s       : sprite-depth 4,3,2,1 bit(s) per pixel (4 default)
-t       : type 0 = 4bit raw,  1 = 8bit raw, 2 = SPS, 3 = PCX (3 is default)
           type 4 = 1bit raw type 5 = PI1 (Atari ST), 6 = MS Windows BMP
-u       : unpacked     (packed is default)
-p       : palette output-format : 0 - C, 1 - ASM, 2 - LYXASS(default)
-axxxyyy : action point (e.g. -a200020)
-Swwwhhh : sprite width and height (input-size is default)
-oxxxyyy : offset in data (e.g. -o010200 )
-iwwwhhh : input size (not needed for PCX)
-rxxxyyy : split picture into yyy * xxx tiles
-z       : (only possible with -c) auto-set sprite-depth
in       : input data
out      : output filename, optional, default is in.spr

Note: With -p0 the sprite is saveed as cc65-Object file !

In batchmode, lines must have the same format as in command
line-mode, only if a input-file is defined in one line it can be
omitted in the following lines.

1bit raw =  8 pels per byte ( => -s1 is default )
4bit raw => 2 pels per byte
8bit raw => 1 pel  per byte
SPS      => ASCII-hex-number per pel (blank = 0)
PCX      => either 8 bits / 1 plane, 4bit / 1 plane or 1 bit / 4 planes
PI1      => 1 bit / 4 planes , Atari ST Low Rez-format
BMP      => either 8 bits or 4 bits not RLE encoded
