# Viết chương trình kiểm tra một số nguyên dương bất kỳ (2 chữ số trở lên, không quá 9 chữ số) có chữ số bắt đầu và kết thúc bằng nhau hay không.

# Dữ liệu vào: Dòng đầu tiên ghi số bộ test. Mỗi bộ test viết trên một dòng số nguyên dương tương ứng cần kiểm tra. 

# Kết quả: Mỗi bộ test viết ra YES hoặc NO, tương ứng với bộ dữ liệu vào

t = int(input())

for i in range(t):
    s = input()
    print(s[0],s[-1])
    if s[0]==s[-1]:
        print("YES")
    else:
        print("NO")