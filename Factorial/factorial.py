num = int(input("Enter the number : "))

# ### Factorial number in for loop 

fact = 1;

for x in range(1,num+1) :
    fact = fact * x;
print("Factorial number is = ",fact)



# ### Factorial number in while loop

fact = 1
a = 1
while a<=num:
    fact = fact*a
    a = a+1
print("Factorial number is = ",fact)
