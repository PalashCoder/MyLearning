number=int(input("Enter the number: "))

def naturalSum(number):
    if number==1:
        return 1
    else:
        return number + naturalSum(number-1)

print("The sum of first",number,"natural numbers is",naturalSum(number))