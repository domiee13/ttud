t = int(input())

for i in range(t):
    s = input()
    a = [i for i in s]
    a = list(tuple(a)) # Nen phai chuyen sang list
    b = sorted(tuple(a)) #Tra ve 1 list
    if a==b or a==b[::-1]:
        print("YES")
    else:
        print("NO")