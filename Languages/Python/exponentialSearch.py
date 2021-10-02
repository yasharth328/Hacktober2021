# Write a python program to implement Exponential Search

def binarySearch(list, first, last, item):
    pos = -1

    while (first <= last) and (pos == -1):
        mid = (first + last) // 2

        if list[mid] == item:
            pos = mid
        elif list[mid] < item:
            first = mid + 1
        else:
            last = mid - 1
    return pos


def exponentialSearch(list, item):
    if list[0] == item:
        return 0
    i = 1
    while i < len(list) and list[i] <= item:
        i = i * 2
    return binarySearch(list, i//2, min(i, len(list)), item)


list = [10, 15, 20, 25, 30, 35, 40, 45, 50]
element = int(input("Enter the element to search: "))
pos = exponentialSearch(list, element)
if pos != -1:
    print(f"Item Found at position {pos}")
else:
    print("Item Not Found")
