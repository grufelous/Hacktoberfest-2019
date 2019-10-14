input_integer = int(raw_input("Enter the number : "))
reversed_integer = 0
while input_integer != 0:
    reversed_integer = reversed_integer*10 + input_integer%10
    input_integer /= 10
print(reversed_integer)