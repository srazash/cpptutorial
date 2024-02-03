MAKEFLAGS += --silent

build:
	c++ main.cpp Shape.cpp Circle.cpp

lambda:
	c++ lambda.cpp

run:
	c++ main.cpp Shape.cpp Circle.cpp
	./a.out
	rm -f a.out

clean:
	rm -f *.out
