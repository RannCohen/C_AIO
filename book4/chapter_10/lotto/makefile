#Makefile for lotto program

lotto: main.o init.o select.o sort.o display.o
	gcc main.o init.o select.o sort.o display.o -o lotto

main.o: main.c lotto.h
	gcc -c main.c

init.o: init.c lotto.h
	gcc -c init.c

select.o: select.c lotto.h
	gcc -c select.c

sort.o: sort.c lotto.h
	gcc -c sort.c

display.o: display.c lotto.h
	gcc -c display.c