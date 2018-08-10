CXX = clang++
OBJS = card.o

all: main

main: $(OBJS)
	$(CXX) $(OBJS)  -o card

clean:
	$(RM) main $(OBSJ) core *~