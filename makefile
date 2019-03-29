SRCS = $(wildcard *.cpp ../lib/*.cpp)
OBJS = $(SRCS:.cpp = .o)
CC = g++
INCLUDES = -I../include
LIBS = -L/mingw64/lib -L../lib -L/mingw64/x86_64-w64-mingw32/lib -lsfml-graphics -lsfml-system -lsfml-window -lopengl32
CCFLAGS = -g -Wall -O0 -std=c++14
.PHONY:all clean
# all:$(OUTPUT)
all:
	for f in $(SRCS); do \
	$(CC) -o	`echo $$f | sed s/.cpp/.exe/g` $$f $(CCFLAGS) $(INCLUDES) $(LIBS);\
	done;

clean:
	rm -rf *.exe

