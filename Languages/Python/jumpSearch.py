# Write a python program to implement Jump Search

import math

def jumpSearch(arr, x):
    step = math.sqrt(len(arr))
    prev = 0
    while arr[int(min(step, len(arr))-1)] < x:
        prev = step
        step += math.sqrt(len(arr))
        if prev >= len(arr):
            break

    while arr[int(prev)] < x:
        prev += 1
        if prev == min(step, len(arr)):
            break

    if arr[int(prev)] == x:
        return int(prev)

    return -1


list = [10, 15, 20, 25, 30, 35, 40, 45, 50]
element = int(input("Enter the element to search: "))
pos = jumpSearch(list, element)
if pos != -1:
    print(f"Item Found at position {pos}")
else:
    print("Item Not Found")
