# Cho mảng A[] gồm n-1 phần tử bao gồm các khác nhau từ 1, 2, .., n. Hãy tìm số không có mặt trong mảng A[].

# Input:

# Dòng đầu tiên đưa vào số lượng bộ test T.
# Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào n l; dòng tiếp theo đưa vào n-1 số A[i]; các số được viết cách nhau một vài khoảng trống.
# T, n, A thỏa mãn ràng buộc: 1≤T≤100; 1≤N, A[i] ≤107.
# Output:

# Đưa ra kết quả mỗi test theo từng dòng.

t = int(input())

for i in range(t):
    n = int(input())
    a = [int(i) for i in input().split()]
    for i in range(1,n+1):
        if i not in a:
            print(i)
            break