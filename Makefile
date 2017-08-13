.PHONY: all clean

all: main.out

main.out: main.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f main.out
