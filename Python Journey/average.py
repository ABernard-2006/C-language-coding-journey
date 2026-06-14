numbers = []

num = int(input("Enter a number (0 to stop): "))
largest = smallest = num
total = count = ave = aboveave = i = 0

while num != 0:
    numbers.append(num)
    count += 1
    total += num
    if num > largest:
        largest = num
    if num < smallest:
        smallest = num
    num = int(input("Enter a number (0 to stop): "))
    
if count > 0:
    ave = total/count
else:
    ave = 0
    
while i < count:
    if numbers[i] > ave:
        aboveave += 1
    i += 1

print()
print("----- RESULTS -----")
print(f"Numbers: {numbers}")
print(f"Largest: {largest}")
print(f"Smallest: {smallest}")
print(f"Average: {ave}")
print(f"Above Average: {aboveave}")