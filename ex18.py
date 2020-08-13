t = int(input())

for i in range(t):
    a = int(input())
    l = []
    k = [int(i) for i in str(a) if i.isnumeric()]
    for i in range(2,a):
        while a%i==0:
            l.append(i)
            a = a/i
    if sum(k)==sum(l):
        print("YES")
    else:
        print("NO")