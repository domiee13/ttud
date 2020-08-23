t = long long(input())

for i in range(t):
    s = input()
    a = [i for i in s if i.isnumeric()]
    if long long(a[0])+long long(a[1])==long long(a[2]):
        prlong long("YES")
    else:
        prlong long("NO")