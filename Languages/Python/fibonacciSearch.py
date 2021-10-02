# Write a python program to implement Fibonacci Search

def FibonacciGenerator(n):
    if n < 1:
        return 0
    elif n == 1:
        return 1
    else:
        return FibonacciGenerator(n - 1) + FibonacciGenerator(n - 2)


def fibonacciSearch(list, item):
    m = 0
    offset = -1

    while FibonacciGenerator(m) < len(list):
        m = m + 1

    while (FibonacciGenerator(m) > 1):
        i = min(offset + FibonacciGenerator(m - 2), len(list) - 1)

        if (item > list[i]):
            m = m - 1
            offset = i
        elif (item < list[i]):
            m = m - 2
        else:
            return i

    if(FibonacciGenerator(m - 1) and list[offset + 1] == item):
        return offset + 1
    return -1


list = [10, 15, 20, 25, 30, 35, 40, 45, 50]
element = int(input("Enter the element to search: "))
pos = fibonacciSearch(list, element)
if pos != -1:
    print(f"Item Found at position {pos}")
else:
    print("Item Not Found")
