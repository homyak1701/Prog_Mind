
.PHONY := clean

bin := temp
CC:= gcc

temp: main.c

		$(CC) main.c -o $(bin) -pthread -O0

clean: 
		rm -rf *.o *.a temp 
		

