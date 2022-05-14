.PHONY:all
all:exe load

load:load.c
	gcc -o $@ $^
exe:exe.c
	gcc -o $@ $^
.PHONY:clean
clean:
	rm -f load exe
