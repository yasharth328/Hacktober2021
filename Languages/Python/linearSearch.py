# Linear Search

def linearSearch(list,item):
  for i in range(len(list)):
    if(list[i]==item):
      return i
  return -1

list=[6,7,3,4,2,6,8,6,1,2,7,9]
element = int(input("Enter the element to search: "))        
pos = linearSearch(list,element)
if pos != -1:
  print(f"Item Found at position {pos}" )
else:
  print("Item Not Found")
    