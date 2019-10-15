flag = True
while flag:
    exp = str(input('Enter expression : '))
    if exp == 'q':
        flag = False
        break
    else:
        print(eval(exp))
