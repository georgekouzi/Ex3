CC=gcc
FLAGS= -Wall -g

all: isort textfind	

textfind: textfind.o mainForTextFind.o
	$(CC) $(FLAGS) -o textfind mainForTextFind.o textfind.o

mainForTextFind.o: mainForTextFind.c textfind.h  
	$(CC) $(FLAGS) -c mainForTextFind.c 


textfind.o: textfind.c textfind.h
	$(CC) $(FLAGS) -c textfind.c

isort: isort.o mainForisort.o
	$(CC) $(FLAGS) -o isort mainForisort.o isort.o

mainForisort.o: mainForisort.c isort.h  
	$(CC) $(FLAGS) -c mainForisort.c 

isort.o:isort.c isort.h  
	$(CC) $(FLAGS) -c isort.c 


.PHONY: isort clean all textfind

clean:
	rm -f *.o *.a isort textfind