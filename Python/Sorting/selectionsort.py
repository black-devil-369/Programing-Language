import sys
list= [35,34,62,35,90,10,67]
def selectionsort():
    for i in range(len(list)):
        min_idx = i
        for j in range(i+1,len(list)):
            if(list[min_idx]<list[j]):
                min_idx = j
        list[i],list[min_idx] = list[min_idx],list[i]

print(" Before Sorted Arrays")
for i in range(len(list)):
    print(list[i],end=" ")
print(" ")
selectionsort()
print("After the sorting the Arrays")
for i in range(len(list)):
    print(list[i],end=" ")
print(" ")
