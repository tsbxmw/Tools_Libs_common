all : a2str.o liblog.so

a2str.o : all2string.cpp
	g++ -c all2string.cpp -o a2str.o

liblog.so : log.cpp
	g++ -shared -fPIC log.cpp -o liblog.so

clean :
	rm -rf a2str.o liblog.so
