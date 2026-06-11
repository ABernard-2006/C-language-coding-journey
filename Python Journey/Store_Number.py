numbers = []

num = int(input("Enter a number (0 to stop): "))
largest = num
sum = 0
count = 0
while num != 0:
    numbers.append(num)
    count +=1
    sum += num
    if num > largest:
        largest = num
    
    num = int(input("Enter a number (0 to stop): "))

print()
print("----- RESULTS -----")
print(f"Numbers entered: {numbers}")
print(f"Count: {count}")
print(f"Sum: {sum}")
print(f"Largest: {largest}")