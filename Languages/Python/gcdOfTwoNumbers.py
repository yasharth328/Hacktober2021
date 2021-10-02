# Write a python program to find GCD of two numbers

def findGCD(num1, num2):
    if num1 == 0:
        return num1
    while(num2 != 0):
        if num1 > num2:
            num1 = num1 - num2
        else:
            num2 = num2 - num1
    return num1


numbers = input("Enter numbers (separated by spaces): ").split()
num1 = int(numbers[0])
num2 = int(numbers[1])

GCD = findGCD(num1, num2)
print(f"GCD of {num1} and {num2} is {GCD}")
