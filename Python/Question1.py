
Input = []
n = int(input("Enter number of elements : "))
#for i in range(0, n): #Comment
Input = [int(s) for s in input().split()] #Changed method of input
    #Input.append(ele) Commment
if(Input[0] < 0):
    prev = 1
else:
    prev = -1
ans = 0 #Ans variable created 
for elem in Input:
    if elem == 0: #Added =
        sign = 1 # -1 to 1
    else:
        sign = elem / abs(elem)

    if sign == -prev:
        ans = ans + 1
        prev = sign
print(ans-1) #Changed sign to ans-1
