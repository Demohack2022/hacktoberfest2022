#Function for addition
def add(x, y):
    return x + y

#Function for subtraction
def subtract(x, y):
    return x - y

# Function for multiplication
def multiply(x, y):
    return x * y

# Function for Division
def divide(x, y):
    return x / y

# Function for Modulo Division
def modulo(x, y):
    return x / y


print("1.Add")
print("2.Subtract")
print("3.Multiply")
print("4.Divide")
print("5.Modulo Division")

print("Enter your choice:")
while True:

    choice = input("Enter your choice (1/2/3/4/5): ")
  
    if choice in ('1', '2', '3', '4', '5'):
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))

        if choice == '1':
            print(num1, "+", num2, "=", add(num1, num2))

        elif choice == '2':
            print(num1, "-", num2, "=", subtract(num1, num2))

        elif choice == '3':
            print(num1, "*", num2, "=", multiply(num1, num2))

        elif choice == '4':
            print(num1, "/", num2, "=", divide(num1, num2))

        elif choice == '5':
            print(num1, "%", num2, "=", modulo(num1, num2))

        more_calculation = input("Continue calculation? (type yes to continue): ")
        if more_calculation != "yes":
          break
    
    else:
        print("Not a valid input")
