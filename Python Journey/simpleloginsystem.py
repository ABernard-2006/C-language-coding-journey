def data_base(username, password):
    if username == "admin" and password == "admin123":
        return True
    else:
        return False

count = 0  

while count < 3:
    
    print()
    name = input("Enter username: ")
    password = input("Enter password: ")

    if data_base(name, password):
        print("\nLogin successful!")
        print(f"\nWelcome, {name}.")
        break
    elif count == 2:
        print("\nToo many failed attempts. Please try again later.")
        break
    else:
        print("\nInvalid username or password.Try again.")
        count += 1
    