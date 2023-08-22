
#c=0
n=int(input("enter any no.\n"))
for i in range(2,n):
    c=0
    for j in range(2,i):
        if(i%j==0):
            c=1
         #   break

    if(c!=1):
        print(i)


