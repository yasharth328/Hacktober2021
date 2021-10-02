# Write a python program that takes command line arguments as input and print the number of arguments

import sys

count = 0
print("Command line arguments are: ", end="")
for arg in range(1, len(sys.argv)):
    count += 1
    print(sys.argv[arg], end=" ")
print(f"\nTotal No. of arguments are: {count}")
