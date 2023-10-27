#!/bin/bash
c_files=$(ls *.c 2>/dev/null)
if [ -z "$c_files" ]; then
echo "No .c files found in the current directory."
exit 1
fi
gcc -c $c_files
ar rcs liball.a *.o
echo "Static library liball.a  has been successfully created from the .c files"
