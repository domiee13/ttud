# Time limit
t = int(input())

for i in range(t):
    ok = False
    n = input()
    s = input().split(" ")
    a = [i for i in s if s.count(i)>1]
    if len(a)==0:
        print("NO")
    else:
        print(a[0])