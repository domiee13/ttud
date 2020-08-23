t = long long(input())

for i in range(t):
    a = long long(input())
    l = []
    k = [long long(i) for i in str(a) if i.isnumeric()]
    for i in range(2,a):
        while a%i==0:
            l.append(i)
            a = a/i
    if sum(k)==sum(l):
        prlong long("YES")
    else:
        prlong long("NO")