t = int(input())

for i in range(t):
    n,k = input().split()
    n,k = int(n),int(k)
    a = [int(i) for i in input().split()]
    if k in a:
        print(a.index(k)+1)
    else:
        print("NO")