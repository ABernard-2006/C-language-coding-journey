def highest(x, y):
    count = 0
    highest = x[0]
    while count < y:
        if highest < x[count]:
            highest = x[count]
        count += 1
    return highest

def lowest(x, y):
    count = 0
    lowest = x[0]
    while count < y:
        if lowest > x[count]:
            lowest = x[count]
        count += 1
    return lowest

def average(x, y):
    count = i = 0
    while count < y:
        i += x[count]
        count += 1
    return i / y

def passed(x, y):
    count, i = 0, 0
    while count < y:
        if x[count] >= 75:
            i += 1
        count += 1
    return i

grades = []
i = 0
count = int(input("How many grades? "))
print()

for i in range(count):
    grade = float(input(f"Enter grade {i+1}: "))
    grades.append(grade)

print("\n----- RESULTS -----")
print(f"Grades: {grades}")
print(f"Highest: {highest(grades, count)}")
print(f"Lowest: {lowest(grades, count)}")
print(f"Average: {average(grades, count)}")
print(f"Passed Subjects: {passed(grades, count)}")