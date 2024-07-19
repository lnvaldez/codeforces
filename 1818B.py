t = int(input())
answers = []

def permutation(n, list):

    for i in range(n):
        list.append(i + 1)

    l = list[0]
    r = n
    div = r - l + 1

    if len(list) > 1:
        if (sum(list) % div != 0):
            return list
        else:
            for x in range(len(list)):
                return -1
    else:
        return list

for i in range(t):
    permutations = []
    n = int(input())
    answers.append(permutation(n, permutations))

for answer in answers:
    if answer == -1:
        print(-1)
    else:
        print(" ".join(map(str, answer)))