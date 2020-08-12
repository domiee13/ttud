t = int(input())

for i in range(t):
    s = input()
    a = [i for i in s]
    a = list(set(a)) 
    print(a)
    print(sorted(a))
    if a==sorted(a) or a[::-1]==sorted(a):
        print("YES")
    else:
        print("NO")