CXX = g++
CXXFLAGS = -Wall -Werror -std=c++11

SRC = singleLinkedList.cpp
OUT = singleLinkedList

all: $(OUT)

$(OUT): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(OUT) $(SRC)

run: $(OUT)
	./$(OUT)
	
clean:
	rm -f $(OUT)
