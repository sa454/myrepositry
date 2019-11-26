


  cc = gcc

main:   main.o sub.o add.o
	$(cc) -o main main.o add.o sub.o   

main.o: main.c
	$(cc) -o main.o -c main.c         
 
add.o:  add.c
	$(cc) -o add.o -c add.c

sub.o:  sub.c
	$(cc) -o sub.o -c sub.c


 
   clean:
	rm -rf *.o main
