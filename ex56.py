# Cho 2 xâu S1 và S2. Hãy tìm xâu con chung dài nhất của 2 xâu này (các phần tử không nhất thiết phải liên tiếp nhau).

# Input: Dòng đầu tiên là số lượng bộ test T (T ≤ 20). Mỗi test gồm hai dòng, mô tả xâu S1 và S2, mỗi xâu có độ dài không quá 1000 và chỉ gồm các chữ cái in hoa.

# Output:  Với mỗi test, in ra độ dài dãy con chung dài nhất trên một dòng.

t = int(input())

for i in range(0,t):
    s1 = input()
    s2 = input()
    a = [i for i in s1+s2]
    print(len(set([i for i in a if i in s1 and i in s2])))