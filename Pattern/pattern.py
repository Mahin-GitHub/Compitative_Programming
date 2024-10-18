n = int(input("Enter the Number of Pttern : "))

# for i in range(n+1):
#     print((2*i-1)*"*")

# even
# for i in range(1,n+1) :
#     for j in range(1,i+1):
#         print("*",end="")
#     print()

# Odd

for i in range(1,n+1):
    # if i%2 != 0 :
    k = i;    
    for j in range(1,i+k):
        print("*",end="")
        # k=2
    print()