# Cho số nguyên dương N và K. Hãy tính NK modulo 109+7.

# Input:

# Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

# Mỗi test gồm 1 số nguyên N và K (1 ≤ N ≤ 1000, 1 ≤ K ≤ 109).

# Output: 

# Với mỗi test, in ra đáp án trên một dòng.

t = int(input())
mod = 10**9+7
for i in range(t):
    n,k = input().split(" ")
    n,k = int(n),int(k)
    print((n**k)%mod)