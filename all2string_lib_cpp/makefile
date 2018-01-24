all: a2str.a a2str.so

a2str.a : all2string.o
	ar rcs a2str.a all2string.o

all2string.o : all2string.cpp
	g++ -fPIC -c all2string.cpp -o all2string.o 

a2str.so : all2string.cpp
	g++ -fPIC -shared -c all2string.cpp -o a2str.so

clean:
	rm -rf all2string.o a2str.a a2str.so
