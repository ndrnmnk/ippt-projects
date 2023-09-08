while 1:
    print ("Enter number 1:")
    a = input()
    print ("Enter number 2:")
    b = input()
    print ("What to do:")
    c = input()
    if b == '0' and c == '/':
            print("You cant do this.")
            exit();
    a = int(a)
    b = int(b)
    if c == '+':
            print (a+b)
    if c == '-':
            print (a-b)
    if c == '*':
            print (a*b)
    if c == '/':
            print (a/b)
    print ("calculate something else? [Y/n]")
    cont = input()
    if cont != 'y':
        exit()
