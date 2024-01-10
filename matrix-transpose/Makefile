CC = g++

CFLAGS = -Wall

DFLAGS = -g

TARGET = matrix_transpose_output.exe

SRCS = matrix_transpose.cpp

OBJS = $(SRCS:%.cpp=%.o)

all: $(TARGET)

$(TARGET):	$(OBJS)
	@echo ------------------------------------------
	@echo building $@ ...
	$(CC) $(CFLAGS) $(DFLAGS) -o $@ $^
	@echo $@ built !
	@echo ------------------------------------------

clean:
	@echo ------------------------------------------
	@echo cleaning
	-rm -r *.o
	-rm $(TARGET)
	-rm -f *~
	@echo project cleaned!
	@echo ------------------------------------------
	