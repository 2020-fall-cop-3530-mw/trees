CXX = g++
CXXFLAGS = -std=c++11 -Wall

clean:
	$(RM) *.o

test-all: node-test tree-test

node-test: test/node-test.cpp node.o test/catch/catch.o
	$(CXX) $(CXXFLAGS) $^ -o test/$@
	test/$@ --success

tree-test: test/tree-test.cpp node.o tree.o test/catch/catch.o
	$(CXX) $(CXXFLAGS) $^ -o test/$@
	test/$@ --success
