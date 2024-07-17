'''
Problem: 228A - Is your horseshoe on the other hoof?
Link: https://codeforces.com/problemset/problem/228/A
Rating: 800
Tags: implementation
'''

s = [int(x) for x in input().split()]

s_unique = set(s)
s_unique = list(s_unique)

buy = len(s) - len(s_unique)

print(buy)