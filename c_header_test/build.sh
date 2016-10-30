#!/bin/sh

gcc -c hallo.c
gcc -c gruss.c
gcc -c redenverab.c
gcc hallo.o gruss.o redenverab.o -o hallo