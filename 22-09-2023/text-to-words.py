import re


s = input()
s1 = re.sub(r'[^a-zA-Z\s]', '', s)
a = s1.split()
a = list(set(a))
a.sort()
for w in a:
    print(w)
