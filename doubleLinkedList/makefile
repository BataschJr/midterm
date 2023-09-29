CXX = g++
CXXFLAGS = -Wall -Werror -std=c++11

SRC = doubleLinkedList.cpp
OUT = doubleLinkedList

all: $(OUT)

$(OUT): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(OUT) $(SRC)

run: $(OUT)
	./$(OUT)
	
clean:
	rm -f $(OUT)
