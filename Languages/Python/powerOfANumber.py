# Write a python program to find exponential of a number (power of a number).

base = int(input("Enter an base: "))
exp = int(input("Enter an exponent: "))
power = 1
for i in range(1, exp + 1):
    power = power * base

print(f"Power of a number = {power}")
