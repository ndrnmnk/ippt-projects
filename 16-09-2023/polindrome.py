import random
import math


def polindrome():
    res = 0
    for x in range(0, 1000):
        var = random.randint(0, 99)
        if var % 10 == math.floor(var / 10):
            res += 1
    return res


print(polindrome())
