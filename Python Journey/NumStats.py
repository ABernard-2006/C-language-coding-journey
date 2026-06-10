num = int(input("Enter a number (0 to stop): "))
even = odd = count = 0
largest = num

while num != 0:
    if num % 2 == 0:
        even += 1
    else:
        odd += 1
    count +=1
    if num > largest:
        largest = num
    
    num = int(input("Enter a number (0 to stop): "))

print()
print("----- RESULTS -----")
print(f"Total numbers entered: {count}")
print(f"Even numbers: {even}")
print(f"Odd numbers: {odd}")
print(f"Largest number: {largest}")
