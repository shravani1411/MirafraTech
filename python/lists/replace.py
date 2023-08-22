fruits = ["apple", "banana", "cherry", "banana", "mango"]

newlist = [x if x != "banana" else "orange" for x in fruits]

print(newlist)

