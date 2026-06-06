num = int(input("Enter a number: "))
category = ""
if num % 2 == 0:
    category = "even"
else:
    category = "odd"

print(f"{num} is {category}")