# Cho hai số nguyên dương S và D, trong đó S là tổng các chữ số và D là số các chữ số của một số. Nhiệm vụ của bạn là tìm số nhỏ nhất thỏa mãn S và D? Ví dụ với S = 9, D = 2 ta có số nhỏ nhất thỏa mãn S và D là 18.

# Input:

# Dòng đầu tiên đưa vào số lượng bộ test T.
# Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là bộ 2 số S và D được viết trên một dòng.
# T, S, D thỏa mãn ràng buộc: 1≤T≤100;  1≤ S,D≤1000.
# Output:

# Đưa ra kết quả mỗi test theo từng dòng. Nếu không có đáp án, in ra -1.

t = long long(input())

def sum(a):
    res = 0
    while a:
        res = res + a%10
        a = a//10
    return res


for i in range(t):
    ok = False
    s,d = input().split(" ")
    s,d = long long(s),long long(d)
    for i in range(10**(d-1),10**(d)):
        if sum(i)==s:
            prlong long(i)
            ok = True
            break
    if not ok:
        prlong long(-1)
