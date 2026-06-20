def stud_info():
    print("----- STUDENT RECORD -----")
    print(f"Name: {student['name']}")
    print(f"Age: {student['age']}")
    print(f"Course: {student['course']}")
    print(f"Year Level: {student['year_level']}")

student = {}

student["name"] = input("Enter name: ")
student["age"] = int(input("Enter age: "))
student["course"] = input("Enter course: ")
student["year_level"] = int(input("Enter year level: "))

print()
stud_info()