s = [int(x) for x in input().split()]

s_unique = set(s)
s_unique = list(s_unique)

buy = len(s) - len(s_unique)

print(buy)