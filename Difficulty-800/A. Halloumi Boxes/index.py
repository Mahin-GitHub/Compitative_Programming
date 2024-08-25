n = int(input("Enter the last number : "));

sum = 0

for x in range(1,n+1):
    sum = sum + (1/x);

print(sum)