my.out: a.o fact.o
	gcc a.o fact.o -o my.out
a.o:a.c
	gcc a.c -c -o a.o
fact.o:fact.c
	gcc fact.c -c -o fact.o
clean:
	rm  -f *.out
	rm  -f *.i
	rm  -f *.o
