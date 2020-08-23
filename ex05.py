#problem with input
s = ['2','3','5','7']

def check(n):
    tmp = set([i for i in str(n)])
    for i in tmp:
        if i not in s:
            return False
    return True

a= []
c=1
n = input()
while n and c<=50000:
    a.append(n)
    n = input()
    c = c+1
#Display result
res = {}
for i in a:
    if check(i):
        res[i]= a.count(i)

for i in res:
    prlong long(i,res[i])
    