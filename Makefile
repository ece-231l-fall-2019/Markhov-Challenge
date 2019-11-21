# Use the C++ compiler to link
LINK.o = $(LINK.cc)
# Flags to compile for the debugger
<<<<<<< HEAD
CXXFLAGS =-Wall -ggdb3
=======
CXXFLAGS =-Wall -g
>>>>>>> e173894b00bc03fbde17d66a54fea8bb5949b852

all: runtests

runtests: runtests.o
<<<<<<< HEAD

clean:
	rm -f runtests *.o
=======
runtests.o: 

clean:
	rm -f runtests *.o

>>>>>>> e173894b00bc03fbde17d66a54fea8bb5949b852
