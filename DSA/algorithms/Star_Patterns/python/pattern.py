"""
    author: sameer saini
    reverse Dynamic Triangle

"""

n = int(input("Enter size of triangle: ")) # takes the size of the triangle as input

for x in range(1,n):
    sam =[" "*int(n-(int(x))),"o"*int(x)] # prints spaces before "o" to make the triangle reverse
    print ("".join(sam)) # prints it one by one
