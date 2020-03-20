prefix=/usr/local
CC = g++

CFLAGS = -g -Wall
SRC = Programa.cpp Ordenar.cpp
OBJ = Programa.o Ordenar.o
APP = Programa

all: $(OBJ)
	$(CC) $(CFLAGS) -o $(APP) $(OBJ)

clean:
	$(RM) $(OBJ) $(APP)

install: $(APP)
	install -m 0755 $(APP) $(prefix)/bin

unistall: $(APP)
	$(RM) $(prefix)/bin$(APP)