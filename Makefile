CC=g++
CFLAGS=-g
all: fatinfo
	
fatinfo: main.cpp
	$(CC) $(CFLAGS) -o fatinfo main.cpp filesystem.cpp fifunctions.cpp
	
clean:
	rm fatinfo
	rm -r fatinfo.dSYM
	
install:
	cp fatinfo ~/bin/fatinfo
