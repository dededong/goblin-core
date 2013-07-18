#!/bin/sh

CC=gcc
CXX=g++
INC=-I./include/
CFLAGS=-O2 -Wall -g $(INC) -DGSIM_DEBUG
CXXFLAGS=-O2 -Wall -g $(INC) -DGSIM_DEBUG
LINK=-L./ -lgsim

AR=ar
AROPTS=rcs

LEX=flex
LEX_OPTS=-Pgsim
YACC=yacc

#-- EOF 