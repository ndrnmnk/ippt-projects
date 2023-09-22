s = input()
# s1 = s.replace(' ', '')                       # remove spaces
s1 = "".join(c for c in s if c.isalnum())       # or remove more symbols
s1 = s1.lower()                                 # make letters lower-case
letters = {}
for c in s1:
    if c not in letters:
        letters[c] = 1
    else:
        letters[c] += 1
letters = dict(sorted(letters.items()))
print(letters)
