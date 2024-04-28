# if else 예제

name = "BlockDMask"
if name == "BlockDMask":
	print("이름이 맞습니다.")
else :
	print("이름이 다릅니다.")

# if elif else 예제

pocket = 1000
if pocket == 1000:
	print("복권 구매")
elif pocket == 500:
	print("껌 구매")
else:
	print("집이나 가자")

# 파이썬(Python) 조건문 사용 예제 - (2-1)

a = "사과"
b = "바나나"
c = "치즈"
if a == "사과" or b == "안바나나":    #true
	print("사과 이거나 바나나 입니다.")
 
if a == "사과" and b == "바나나":    #true
	print("사과 이거나 바나나 입니다.")
	
if not c == "사과":  # a가 사과인데 not 이므로 false
	print("사과가 아니어야 여기 들어옵니다.")

# 파이썬(Python) 조건문 사용 예제 - (2-2)

a = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]  
if 1 in a:
	print("1 is in a")  # a 리스트에 1이 포함되어 있습니다.
	
if 10 in a:
	print("10 is in a")  # a 리스트에 10이 포함되어있습니다.

# 파이썬(Python) 조건문 사용 예제 - (3)

p_class = "Z"    # 등급
sel_amount = 79900      # 가격

if p_class == "A":      # 55930.0
    sel_amount *= 0.7   
    print(sel_amount)
elif p_class == "B":    # 67915.0  
    sel_amount *= 0.85   
    print(sel_amount)
elif p_class == "C":    # 73508.0
    sel_amount *= 0.92
    print(sel_amount)
elif p_class == "Z":    # 84900
    sel_amount += 5000
    print(sel_amount)   # 출력 결과 : 84900

#파이썬(Python) 조건문 사용 예제 - (4)

p_class = "Z" 
sel_amount = 79900

if p_class == "A":      # 55930.0    
    sel_amount *= 0.7              
    print(f'판매가는 {sel_amount}원 입니다.')
elif p_class == "B":    # 67915.o
    sel_amount *= 0.85
    print(f'판매가는 {sel_amount}원 입니다.')
elif p_class == "C":    # 73508.0
    sel_amount *= 0.92
    print(f'판매가는 {sel_amount}원 입니다.')
elif p_class == "Z":    # 84900
    sel_amount += 5000
    print(f'판매가는 {sel_amount}원 입니다.')

# 파이썬(Python) 조건문 사용 예제 - (5-1)

X = 11

if X < 10:
	print('X는 10보다 작아!')

else:
	print('X는 10보다 작지 않아!')

# 파이썬(Python) 조건문 사용 예제 - (5-2)

X = 2

if X%2 == 0:
	print('X는 짝수야!')

else:
	print('X는 홀수야!')

# 파이썬(Python) 조건문 사용 예제 - (6)

X = 3

if X < 10:
	print ('X는 10보다 작아!')
	if X%2 == 0:
		print('X는 짝수야!')
	else:
		print('X는 홀수야!')
else:
	print('X는 10보다 커!')
	if X%2 == 0:
		print('X는 짝수야!')
	else:
		print('X는 홀수야!')

# 파이썬(Python) 조건문 사용 예제 - (7)

if X<10 and X%2==0:
	print('X는 10보다 작으면서 짝수야!')

if X<10 and not X%2==0:
	print('X는 10보다 작으면서 홀수야!')

if not X<10 and X%2==0:
	print('X는 10보다 크면서 짝수야!')

if not X<10 and not X%2==0:
	print('X는 10보다 크면서 홀수야!')

# 파이썬(Python) 조건문 사용 - while - (1)

treeHit = 0

while treeHit < 10:
	treeHit = treeHit + 1
	print("나무를 %d번 찍었습니다." % treeHit)
	if treeHit == 10:
	 print("나무 넘어갑니다.")

# 파이썬(Python) 조건문 사용 - while (2)

coffee = 10
money = 300
while money:
	print("돈을 받았으니 커피를 줍니다.")
	coffee = coffee -1
	print("남은 커피의 양은 %d개입니다." % coffee)
	if coffee == 0:
		print("커피가 다 떨어졌습니다. 판매를 중지합니다.")
		break

# 파이썬(Python) 조건문 사용 - while 무한루프

while True:
    print("Ctral+C를 눌러야 while문을 빠져나갈 수 있습니다.")

# while 예제 0번 방법

i = 0
result1 = 0
while i < 100:
    i = i +1
    if i % 2 == 0:
      print('1번 방법 : {0} {1}' .format(i,result1))
      result1 = result1 + i

print('1번 방법 : {0}' .format(result1))

# while 예제 1번 방법

i = 0
result1 = 0
while i < 100:
    i = i +1
    if i % 2 == 0:
      result1 = result1 + i

print('1번 방법 : {0}' .format(result1))

# while 예제 2번 방법

j = 0
result2 = 0
while True:
	if j > 100:
			break
	
	j = j + 1
	if j % 2 == 0:
			result2 = result2 + j
			
print('2번 방법 (break) : {0}'.format(result2))

# while 예제 3번 방법

k = 0
result3 = 0
while k < 100:
	k = k + 1
	if k % 2 != 0:
			continue
	
	result3 = result3 + k
	
print('3번 방법 (continue) : {0}'.format(result3))
