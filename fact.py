def factorial(n):
    if n < 0:
        return 0
    elif n == 0 or n == 1:
        return 1
    else:
        fact = 1
        while(n > 1):
            fact *= n
            n -= 1
        return fact


def factIter(n):
    if n == 0:
        return 1;
    
    facto = 1;
    for i in range (1, n+1):
        facto *= i
    return facto;
 
num = 5;
print("Factorial of ",num," is",factIter(num))
