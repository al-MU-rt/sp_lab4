CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp calculator.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=myprogram
LIBRARY=libcalculator.a

all: $(SOURCES) $(EXECUTABLE) $(LIBRARY)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

$(LIBRARY): calculator.o
	ar rcs $(LIBRARY) calculator.o

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE) $(LIBRARY)
