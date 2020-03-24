raw.o: raw.asm ../pic/bg24bit.spr
	lyxass -shex $<

.PHONY: send
send: raw.o
	sendobj -b 62500 -p com7 $<
