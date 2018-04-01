A:A.o
	g++ A.o -o A
A.o:A.cpp
	g++ -c A.cpp
clean:
	rm A*.o

