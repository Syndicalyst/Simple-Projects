compile:
	g++ -c Paper.cpp
	g++ -c Pen.cpp
main: compile
	g++ main.cpp Paper.o Pen.o
run: main
	rm *.o
	./a.out
	rm *.out