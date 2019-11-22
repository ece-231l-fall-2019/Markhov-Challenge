# Use the C++ compiler to link
LINK.o = $(LINK.cc)
# Flags to compile for the debugger
<<<<<<< HEAD
CXXFLAGS =-Wall -g
=======
CXXFLAGS =-Wall -ggdb3
>>>>>>> 09c53be3a404916b2c04d88c34f0b883b4c21625

all: runtests

runtests: runtests.o

clean:
	rm -f runtests *.o
