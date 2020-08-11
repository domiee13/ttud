t = int(input())

for i in range(t):
    n = int(input())
    if n%2!=0:
        print(0)
    else:
        a = [i for i in range(2,n+1) if i%2==0 and n%i==0]
        print(len(a))