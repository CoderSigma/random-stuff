age = int(input("Enter Age: "))

if age == 18 or age < 18:
    print("minor")
elif age == 19 or age <= 59:
    print("adult")
elif age >= 60:
    print("senior")
