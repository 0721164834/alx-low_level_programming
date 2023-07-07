#!/bin/bash
c_files=$(ls *.c 2>/dev/null)
for file in $c_files; do
	gcc -c "$file"
done

ar rc liball.a *.o

rm -f *.o
