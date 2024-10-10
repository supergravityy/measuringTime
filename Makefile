CC = gcc
CFLAGS = -Wall -I./ItrTimer
LDFLAGS = 

SRCS = main.c ItrTimer/ItrTimer.c
OBJS = $(SRCS:.c=.o)
TARGET = measuringTime



all : $(TARGET) clean_o
	

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

clean:
	rm -f $(OBJS) $(TARGET)

clean_o:
	rm -f $(OBJS)