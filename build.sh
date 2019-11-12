#!/bin/sh
if [ ! -d "log" ]; then
    mkdir log
fi
gcc main.c log.c -o test -llog4c
