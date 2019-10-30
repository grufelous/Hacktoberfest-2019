input_integer = int(input("Enter the number : "))
factor = 1
if input_integer < 0:
    factor = -1
input_integer *= factor
reversed_integer = 0
while input_integer != 0:
    reversed_integer = reversed_integer*10 + input_integer%10
    input_integer //= 10
reversed_integer *= factor
print(reversed_integer)