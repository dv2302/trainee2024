CC = gcc
SRC = ./src
OBJ = ./obj
INC = ./include
BIN = ./bin
  
CFLAGS = -Wall -g -o
IFLAGS = -I $(INC)
LDFLAGS =  -c

cal: $(OBJ)/cal.o $(OBJ)/cal_function.o
	$(CC) $(CFLAGS) $(BIN)/cal $(OBJ)/cal.o $(OBJ)/cal_function.o
$(OBJ)/cal.o: $(SRC)/cal.c
	$(CC) $(LDFLAGS) $(IFLAGS) $(SRC)/cal.c
	mv *.o $(OBJ)/

$(OBJ)/cal_function.o: $(SRC)/cal_function.c
	$(CC) $(LDFLAGS) $(IFLAGS) $(SRC)/cal_function.c
	mv *.o $(OBJ)

clean:
	rm  $(OBJ)/*.o
	rm $(BIN)/cal
