SRC=user.c lib.c

all: original custom

clean:
	rm -f original custom

original: $(SRC)
	$(CC) $^ -o $@

custom: $(SRC)
	$(CC) -DCUSTOM_FOO -DCUSTOM_BAR $^ -o $@

