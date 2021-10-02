# Write a python program to find Maximum number out of list of numbers.

def findMaxNumber(list):
  maxNum = 0
  for num in range(len(list)):
    if list[num] > maxNum:
      maxNum = list[num]
  print(f"Maximum Number is {maxNum}")    

listOfNumbers = input("Enter the numbers (separated by spaces):\n").split()
for n in range(0, len(listOfNumbers)):
  listOfNumbers[n] = int(listOfNumbers[n])

findMaxNumber(listOfNumbers)
