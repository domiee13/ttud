# Một số X được gọi là số khối lập phương nếu X là lũy thừa bậc 3 của số Y (X= Y3). Cho số nguyên dương N, nhiệm vụ của bạn là tìm số khối lập phương lớn nhất bằng cách loại bỏ đi các chữ số của N. Ví dụ số 4125 ta có kết quả là 125 = 53.

# Input:

# Dòng đầu tiên đưa vào số lượng bộ test T.
# Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số tự nhiên N được viết trên một dòng.
# T, N thỏa mãn ràng buộc: 1≤T≤100;  1≤N≤1018.
# Output:

# Đưa ra kết quả mỗi test theo từng dòng. Nếu không tìm được đáp án in ra -1.

t = int(input())

for i in range(t):
    s = input()
    res = []
    for i in s:
        tmp = s.replace(i,'')
        t = int(tmp)**(1/3)
        if int(t)**3 == int(tmp):
            res.append(int(tmp))
    if len(res)==0:
        print(-1)
    else:  
        print(max(res))