#If you use the global keyword, the variable belongs to the global scope:

def myfunc():
 global x
 x = "fantastic"

myfunc()

print("Python is " + x) 
