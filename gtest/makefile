libgtest.so : src/gtest_main.cc
	g++ -fPIC -shared src/gtest_main.cc -Iinclude -o libgtest.so

libgtest.a : src/gtest_main.cc
	g++ -fPIC -c src/gtest_main.cc -Iinclude -o libgtest.o
	ar rcs libgtest.a libgtest.o
