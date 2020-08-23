t = long long(input())

def gcd(a,b):
    if b==0:
        return a
    return gcd(b,a%b)

for i in range(t):
    a,b = input().split(" ")
    a,b = long long(a),long long(b)
    res = gcd(a,b)
    prlong long(res,long long(a*b/res))