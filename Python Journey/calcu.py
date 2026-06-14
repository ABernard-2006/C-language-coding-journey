num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))

def add(x, y):
    return x + y

def sub(x, y):
    return x - y

def mult(x, y):
    return x * y

def div(x, y):
    if y == 0:
        return "Cannot divide by zero"
    else:
        return x/y
    
print("\n----- RESULTS -----")
print(f"Addition: {add(num1, num2)}")
print(f"Subtraction: {sub(num1, num2)}") 
print(f"Multiplication: {mult(num1, num2)}")
print(f"Division: {div(num1, num2)}")