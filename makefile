studentTest: address.o date.o student.o main.o
	g++ -g *.o -o studentTest

address.o: address.h address.cpp
	g++ -g -c address.cpp

date.o: date.h date.cpp
	g++ -g -c date.cpp

student.o: student.h student.cpp
	g++ -g -c student.cpp

main.o: student.h date.h address.h main.cpp
	g++ -g -c main.cpp

run: studentTest
	./studentTest

debug: studentTest
	gdb studentTest
