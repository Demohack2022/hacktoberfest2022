import time
print("This is BMI Calculator V4")
# Convertors
print("If you don't Know your height in METRES or your weight in KILOGRAMS use Our Convertors")
# Delay 3 seconds
time.sleep(3)
Convert_use = input("Do you Want to Use our Convertors?")
if Convert_use == "yes":
    q = input("Do you want to Convert Height to Metres?")
    if q == "yes":
        # Feets to Metres Convertor
        import ftstomsConvert_BMI_calc
        ftstomsConvert_BMI_calc.function1()
    else:
        print("")
    w = input("Do you want to convert Weight to Kilograms?")
    if w == "yes":
        # Pounds to Kilograms Convertor
        import lbtoKgConvert_BMI_calc
        lbtoKgConvert_BMI_calc.function2()
    else:
        print("")
else:
    print("Continuing......")
print("To Calculate the BMI follow the actions:")
while True:
    # Value Input Area
    name = input("Enter your NAME here:")
    height = float(input("Enter your height here(in metres):"))
    weight = float(input("Enter your weight here(in kilograms):"))
    bmi = (weight / height ** 2)
    print(name, "your BMI is", bmi)
    # BMI Type

    if bmi > 30:
        # Obese (Above 30)
        print("You are Obese")
        print("Thank you for using BMI Calculator V4")
    elif bmi < 1:
        # Wrong Values
        print("Please put the right values in Metres and Kilograms")
    elif bmi > 25:
        # Overweight (Above 25, Below 30)
        print("You are Overweight")
        print("Thank you for using BMI Calculator V3.1")
    elif bmi < 18.5:
        # Underweight (Less than 18.5)
        print("You are Underweight")
        print("Thank you for using BMI Calculator V4")
    else:
        # Normal (Above 18.5, Below 25)
        print("You are Normal")
        if bmi > 24:
            print("You may want to exercise a little as you are on the borderline")
        else:
            print("Thank you for using BMI Calculator V4")
    a = input("Do u want to use this again?(yes or no)")
    if a == "yes":
        continue
    elif a == "no":
        print("Thank you want to use BMI Calculator V4")
        print("Bye")
        break
    else:
        print("I will take that as a NO.")
        print("Bye")
        break
