#Python code to print unique values from a list using traversal
def unique(list_value):
    unique_list = []
    for x in list_value:
        # check if exists in unique_list or not
        if x not in unique_list:
            unique_list.append(x)
    for x in unique_list:
        print(x)
        
list1 = [3, 1, 1, 1, 9, 3, 10]
print("\nThe unique values from the list are")
unique(list1)

list2 =[1, 2, 1, 1, 3, 4, 3, 3, 5]
print("\nthe unique values from 2nd list is")
unique(list2)
