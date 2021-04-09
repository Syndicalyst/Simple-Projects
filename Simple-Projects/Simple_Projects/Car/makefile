compile:
	g++ -c *.cpp
	rm main.o
main: compile
	g++ main.cpp *.o
run: main
	rm *.o
	./a.out
	rm *.out