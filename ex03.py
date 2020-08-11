t = int(input())

for i in range(t):
    s = input()
    a = [i for i in s if i.isnumeric()]
    if int(a[0])+int(a[1])==int(a[2]):
        print("YES")
    else:
        print("NO")