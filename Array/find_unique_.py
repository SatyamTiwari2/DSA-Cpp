n= int(input("number of elements of array: "))
l=[0]*n
for i in range(n):
    l[i]=int(input("enter elements: "))

for i in range(n):
    count =0
    for j in range(i+1,n):
        if l[i]==l[j]:
            count+=1
if count==1 :
     print('unique number', l[i])

