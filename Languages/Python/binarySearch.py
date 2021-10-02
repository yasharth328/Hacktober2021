# Write a python program to implement Binary Search

def binarySearch(list, item):
    pos, first, last = -1, 0, len(list)-1

    while (first <= last) and (pos == -1):
        mid = (first + last) // 2

        if list[mid] == item:
            pos = mid
        elif list[mid] < item:
            first = mid + 1
        else:
            last = mid - 1
    return pos


list = [10, 15, 20, 25, 30, 35, 40, 45, 50]
element = int(input("Enter the element to search: "))
pos = binarySearch(list, element)
if pos != -1:
    print(f"Item Found at position {pos}")
else:
    print("Item Not Found")
