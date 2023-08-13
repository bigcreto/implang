CXX=clang++
ARGS=-std=c++17

impc: main.o token.o lexer.o
	$(CXX) 

main.o:
	$(CXX) -Wall $(ARGS) src/main.cpp -o main


