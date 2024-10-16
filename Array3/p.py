l = ['l', 'e', 'g', ' ', ' ']
ans = ['q', 'w', 'y', 'h', 'k', 'j', 'w', 'v', 'l', 'e', 'g']
k = []
for i in ans: 
    l[3] = i
    for j in ans: 
        l[4] = j
        k.append(' '.join(l))

k = set(k)
for i in k:
    print(i)


