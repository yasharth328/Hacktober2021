# Write a python program to find square root of a number using Newton's Method.
# root = 0.5 * (x + (N/x))

def newton_method(number):
    a = float(number) 
    for i in range(100): 
        number = 0.5 * (number + a / number) 
    return number


num = int(input("Enter a number: "))
print("Square root of first number:",newton_method(num))