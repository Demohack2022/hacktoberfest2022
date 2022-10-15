def add(a, b):
    return a + b
def sub(a, b):
    return a - b
def mul(a, b):
    return a * b
def div(a, b):
    return a / b

print("Welcome to the Calculator\n\n")
print("Press '1' for Addition\nPress '2' for Subtraction\nPress '3' for Multiplication\nPress '4' for Division\n ")

while True:
    ch = input("Enter your choice : ")
    if ch in ('1', '2', '3', '4'):
        x = float(input("\nEnter 1st number : "))
        y = float(input("Enter 2nd number : "))

        if ch == '1':
            print("\nThe Sum of the nos. is ", add(x, y))
        elif ch == '2':
            print("\nThe Difference of the nos. is ", sub(x, y))    
        elif ch == '3':
            print("\nThe Product of the nos. is ", mul(x, y))
        elif ch == '4':
            print("\nThe Division of the nos. is ", div(x, y))
            
        cont = input("\nDo you wish to continue y or n : ")   
        if cont == 'n':
            print("Exiting Calculator")
            break
    else:
        print("Invalid Input\n")
    