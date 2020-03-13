# Lynx sprite packer

ifeq ($(OS),Windows_NT)
CC = x86_64-w64-mingw32-gcc
DST=../bin_mingw
EXT=.exe
else
CC = gcc
DST=.
EXT=#
endif
RM = rm -f

CFLAGS = -Os -fomit-frame-pointer -DUNIX

C_SRC= io.c sprpck.c bin2obj.c

H_SRC= sprpck.h bmp.h

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

$(DST)/sprpck$(EXT): io.o sprpck.o sprpck.h
	$(CC) -s -o $@ sprpck.o io.o

io.o : io.c bmp.h

clean:
	$(RM) *.o
	$(RM) core
