#!/bin/bash

# Compile all .c files into object files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c -fPIC *.c

# Create the dynamic library from all the object files
gcc -shared -o liball.so *.o

# Clean up: Remove the object files
rm *.o

# Inform the user
echo "Dynamic library liball.so has been created."

# Exit
exit 0

