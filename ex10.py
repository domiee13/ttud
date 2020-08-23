# Trong một buổi học toán, giáo viên viết 2 số nguyên, A và B, và yêu cầu Tèo thực hiện phép cộng. Tèo không bao giờ tính toán sai, nhưng thỉnh thoảng cậu ta chép các con số một cách không chính xác. Lỗi duy nhất của là ghi nhầm '5' thành '6' hoặc ngược lại.  Cho hai số, A và B, tính tổng nhỏ nhất và lớn nhất mà Tèo có thể nhận được.

# Input: Có một dòng chứa hai số nguyên dương A và B ( 1 ≤ A, B ≤ 1 000 000).

# Output: In ra 2 số nguyên cách nhau một dấu cách, tổng nhỏ nhất và lớn nhất có thể nhận được.

a,b = input().split(" ")
t1,t2,t3,t4 = a,b,a,b
t1 = t1.replace('6','5')
t2 = t2.replace('6','5')
minSum = int(t1)+int(t2)
t1 = t1.replace('5','6')
t2 = t2.replace('5','6')
maxSum = int(t1)+int(t2)
print(minSum,maxSum)