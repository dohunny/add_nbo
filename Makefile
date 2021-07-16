#Makefile
all: add-nbo

add-nbo: bin2hex.o add-nbo.o main.o
	g++ -o add-nbo bin2hex.o add-nbo.o main.o

main.o: add-nbo.h main.cpp

add-nbo.o: add-nbo.h add-nbo.cpp

bin2hex.o: add-nbo.h bin2hex.cpp

clean:
	rm -f add-nbo
	rm -f *.o
