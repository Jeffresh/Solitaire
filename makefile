CXX = clang++
OBJS = card.o solitaire.cpp test.cpp

all: main

main: $(OBJS)
	$(CXX) $(OBJS)  -o card

clean:
	$(RM) main $(OBSJ) core *~