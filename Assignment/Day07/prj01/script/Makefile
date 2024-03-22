CC = gcc

ProjDir = /home/rps/Wipro_B01/classWork/day05/prj01

INC = $(ProjDir)/inc
SRC = $(ProjDir)/src
OBJ = $(ProjDir)/obj
BIN = $(ProjDir)/bin


CFLAGS = -c -g -Wall

LDFLAGS = -o

IFLAGS = -I $(INC)


all: simpleCalc

simpleCalc: $(OBJ)/main.o $(OBJ)/simpleCalc.o
	$(CC) $(LDFLAGS) $(BIN)/simpleCalc $(OBJ)/main.o $(OBJ)/simpleCalc.o

$(OBJ)/main.o: $(SRC)/main.c
	$(CC) $(CFLAGS) $(SRC)/main.c $(IFLAGS)
	mv main.o $(OBJ)/
	
$(OBJ)/simpleCalc.o: $(SRC)/simpleCalc.c
	$(CC) $(CFLAGS) $(SRC)/simpleCalc.c $(IFLAGS)
	mv simpleCalc.o $(OBJ)/

clean:
	rm -f *.out *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
