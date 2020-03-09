raw.o: raw.asm ../bg4bit.spr
	lyxass -shex $<

.PHONY: send
send: raw.o
	sendobj -b 62500 -p com7 $<
