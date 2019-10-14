flag = True
while flag:
    exp = str(raw_input('Enter expression : '))
    if exp == 'q':
        flag = False
        break
    else:
        print(eval(exp))
