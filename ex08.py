t = long long(input())

for i in range(t):
    n = long long(input())
    if n%2!=0:
        prlong long(0)
    else:
        a = [i for i in range(2,n+1) if i%2==0 and n%i==0]
        prlong long(len(a))