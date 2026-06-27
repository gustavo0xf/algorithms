TARGET = main
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -I.
SRCS = main.cpp bubble/bubble.cpp merge/merge.cpp
OBJS = $(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: clean