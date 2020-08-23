# Cho mảng A[] gồm n số nguyên dương. Gọi L, R là max và min các phần tử của A[]. Nhiệm vụ của bạn là tìm số phần tử cần thiết cần thêm vào mảng để mảng có đầy đủ các số trong khoảng [L, R]. Ví dụ A[] = {5, 7, 9, 3, 6, 2 } ta nhận được kết quả là 2 tương ứng với các số còn thiếu là 4, 8.

# Input:

# Dòng đầu tiên đưa vào số lượng bộ test T.
# Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n, tương ứng với số phần tử của mảng A[]; dòng tiếp theo là n số A[i] ; các số được viết cách nhau một vài khoảng trống.
# T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n, A[i] ≤103.
# Output:

# Đưa ra kết quả mỗi test theo từng dòng.

t = int(input())

for i in range(t):
    n = int(input())
    s = []
    for i in range(n):
        s.append(int(input()))
    a = list(set(s))
    print(max(a)-min(a)+1-len(a))