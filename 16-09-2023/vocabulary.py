n = "Andrey"
s = "Naumenko"
a = 15
c = "Kharkiv"
vocabulary = {"name": n, "surname": s,
              "age": a,
              "city": c, "nation":"Ukrainian"}
while 1:
    i = input("What do You want to ask? [name/surname/age/city/nation/exit]")
    if i == "exit":
        print("OK")
        exit()
    else:
        print(vocabulary[i])
