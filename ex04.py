t = int(input())

for i in range(t):
    s = input()
    if len(s)==0:
        print("NO")
    else:
        a = []
        for i in s:
            if i not in a:
                a.append(i)
        if a==sorted(a) or a[::-1]==sorted(a):
            print("YES")
        else:
            print("NO")