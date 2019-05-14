###################################################
# Name: makefile
# Author: Nathan Johnson
# Description: makefile for Lab 3
# #################################################

CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -Werror
CXXFLAGS += -g
LDFLAGS = -lboost_date_time

OBJS = warMain.o Die.o LoadedDie.o getInt.o menu.o Game.o

SRCS = warMain.cpp Die.cpp LoadedDie.cpp getInt.cpp menu.cpp Game.cpp

HEADERS =

warGame.exe: ${OBJS} ${HEADERS}
	${CXX} ${LDFLAGS} ${OBJS} -o warGame.exe

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm *.o  *.exe
