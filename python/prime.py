
c=0
n=int(input("enter the no.\n"))
for i in range(n):
    if(i%n==0):
        c=1
       # break

if(c=1):
    print("prime")
else:
    print("not prime")
