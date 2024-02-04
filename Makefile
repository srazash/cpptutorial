MAKEFLAGS += --silent

main:
	c++ main.cpp Shape.cpp Circle.cpp

lambda:
	c++ lambda.cpp

run:
	c++ main.cpp Shape.cpp Circle.cpp
	./a.out
	rm -f a.out

runwin:
	c++ main.cpp Shape.cpp Circle.cpp
	./a.exe
	rm a.exe

clean:
	rm -f *.out

cleanwin:
	rm *.exe