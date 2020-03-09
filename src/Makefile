# Lynx sprite packer
# Makefile for *nix

CC = gcc
RM = rm -f
EXT = #.exe

CFLAGS = -O2 -fomit-frame-pointer -DUNIX

C_SRC= io.c sprpck.c bin2obj.c

H_SRC= sprpck.h bmp.h

%.o: %.c
	$(CC)  -c $(CFLAGS) $< -o $@

sprpck.exe:   io.o sprpck.o sprpck.h
	$(CC) -s -o $@ sprpck.o io.o

io.o : io.c bmp.h

clean:
	$(RM) *.o
	$(RM) core

zip:
	zip -u sprpck $(C_SRC) $(H_SRC) makefile
	zip -u sprpckdos sprpck.exe
