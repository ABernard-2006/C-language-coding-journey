def student_record_search(x, y):
    count = 0
    while count < len(x):
        if x[count] == y:
            return True
        count += 1
    return False

num_stud = int(input("How many students? "))
count = 0
students = []
while count < num_stud:
    name = input(f"Enter name of student {count + 1}: ")
    name = name.lower()
    students.append(name)
    count += 1

search = input("\nSearch for student: ")
searh = search.lower()

if student_record_search(students, search):
    print("\nStudent found!")
else:
    print("\nStudent not found.")