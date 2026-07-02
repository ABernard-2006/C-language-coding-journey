def add_student(students):
    name = input("Enter student name: ")
    age = input("Enter student age: ")
    students.append({"name": name, "age": age})
    print(f"Student {name} added successfully!")

print("===== STUDENT MANAGER =====")
print("1. Add Student")
print("2. View Students")
print("3. Search Student")
print("4. Exit")

while 