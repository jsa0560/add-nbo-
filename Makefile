TARGET=add-nbo
CXXFLAGS=-g

all: 
	gcc -o add-nbo add-nbo.c

clean:
	rm -f $(TARGET)
	rm -f *.o

