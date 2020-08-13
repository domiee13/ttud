
s = ['2','3','5','7']

def check(n):
    tmp = set([i for i in str(n)])
    for i in tmp:
        if i not in s:
            return False
    return True

inp = input()
a = [ i for i in inp.split(" ")]

res = {}
for i in a:
    if check(i):
        res[i]= a.count(i)

for i in res:
    print(i,res[i])
    