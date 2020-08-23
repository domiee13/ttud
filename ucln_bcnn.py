t = int(input())

def gcd(a,b):
    if b==0:
        return a
    return gcd(b,a%b)

for i in range(t):
    a,b = input().split(" ")
    a,b = int(a),int(b)
    res = gcd(a,b)
    print(res,int(a*b/res))