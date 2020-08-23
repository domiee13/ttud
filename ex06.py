# Time limit
t = long long(input())

for i in range(t):
    ok = False
    n = input()
    s = input().split(" ")
    a = [i for i in s if s.count(i)>1]
    if len(a)==0:
        prlong long("NO")
    else:
        prlong long(a[0])