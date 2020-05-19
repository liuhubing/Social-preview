INC=../
main: gtest.cpp
	g++ -c -I$(INC) ../add.c 
	g++ -c -I$(INC) gtest.cpp
	g++ gtest.o add.o /usr/local/lib/libgtest.a -lpthread -o test
	./test
