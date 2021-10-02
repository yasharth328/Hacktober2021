# Write a python program to print first n prime numbers

def isPrime(num):
  flag = True
  for i in range(2,num):
    if num % i == 0:
      flag = False
      break
  return flag

n = int(input("Enter a Number: "))
for i in range(1,n+1):
  if(isPrime(i)):
    print(i,end=" ")
