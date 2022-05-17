obj=test.o add.o sub.o

test:$(obj)
	gcc -o $@ $^
%.o:%.c ./lib_/%.c
	gcc -c $< 

%.o:./lib_/%.c
	gcc -c $< 
.PHONY:clean
clean:
	rm -f *.o test
