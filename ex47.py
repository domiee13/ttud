# Cho xâu ký tự S. Ta gọi giá trị của xâu S là tổng bình phương số lần xuất hiện mỗi ký tự trong S. Hãy tìm giá trị nhỏ nhất của xâu S sau khi thực hiện K lần loại bỏ ký tự.

# Input:

# Dòng đầu tiên đưa vào số lượng bộ test T.
# Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất là số K; phần thứ hai là một xâu ký tự S được viết trên một dòng.
# T, S, K thỏa mãn ràng buộc: 1≤T≤100;  1≤length(S)≤10000; 1≤K≤1000.
# Output:

# Đưa ra kết quả mỗi test theo từng dòng.

t = int(input())

for i in range(t):
    k = int(input())
    s = input()
    a = []
    for i in s:
        if i not in a:
            a.append(i)
    a = list(set(a))
    b = []
    for i in a:
        b.append(s.count(i))
    print(b)