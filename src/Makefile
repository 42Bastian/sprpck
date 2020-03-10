# Lynx sprite packer

ifeq ($(OS),Windows_NT)
CC = x86_64-w64-mingw32-gcc
EXT=.exe
else
CC = gcc
EXT=#
endif
RM = rm -f

CFLAGS = -Os -fomit-frame-pointer -DUNIX

C_SRC= io.c sprpck.c bin2obj.c

H_SRC= sprpck.h bmp.h

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

sprpck$(EXT): io.o sprpck.o sprpck.h
	$(CC) -s -o $@ sprpck.o io.o

io.o : io.c bmp.h

clean:
	$(RM) *.o
	$(RM) core

zip:
	zip -u sprpck $(C_SRC) $(H_SRC) makefile
	zip -u sprpckdos sprpck.exe
