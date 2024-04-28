# 파이썬(Python) 입력문 사용법 - (1)

str = input("How old are you")
print(str , 'years old', sep=' ') 

# 정수로 저장하기 int(input()) 사용

x = int(input('number : '))
print(x)

# 실수로 저장하기 float(input()) 사용

x = float(input('number : '))
print(x)

# 사용자로 부터 입력 받은 문자를 순자로 바꾸기 eval() 함수

year = input ("this year : ")
year = eval(year)
year = year + 1
print("Next year:", year)

# 파이썬(Python)  입력문 사용법 - 예제

i = 0
result = 0
while i < 5:
    a = input("성적 입력 : ")
    result += int(a)
    i += 1
 
 
print(f'평균 : {result / 5}')

# for loop 문(1-1)

test_list = ['one', 'two', 'three'] 
for i in test_list: 
          print(i)

# for loop 문(1-2)

for i in range(10):
    print(i)

# for loop 문(1-3)

result = 0
for a in range(1,101):  #1 ~ 100
    result = result + a

print(result)

# for loop 문 (break) 

result = 0
for a in range(1,101):  # 1 ~ 100
    result = result + a    # a를 더해주고
 
    if result > 100:    # result가 100이 넘었을때
        print(a)        # 그때의 a값을 출력
        break
 
print(result)

# for loop 문 (break) 
# 반복문을 중간에 멈추고 싶을 경우

index = 0
s = "BlockDMask" 
for a in s:
    if a == 'k':            
        break    # 'k'를 찾았으니 for문에서 나와랏!
     
    index = index + 1


print(index)    # 'k'가 첫번째로 존재하는 위치 출력

# for문으로 돌아가고 싶을 때 (1)

student = [180, 170, 164, 199, 182, 172, 177]
for a in student:
    if a > 170:
        continue  # 키가 170보다 크면 continue
 
    print(a)

# for문으로 돌아가고 싶을 때 (2)

result = 0
for a in range(1,101):  #1 ~ 100
    if a % 2 == 1:      #2로 나누었을때 나머지가 1
        result = result + a
 
print(result)

# for loop문이 종료 된 후 어떤 작업을 수행하려면 else

l = ['Alice' , 'Bob' , 'Charlie']

for name in l:
    if name == 'Bob':
        print('!!BREAK!!')
        break
    print(name)
else:
    print('!!FINISH!!')

# 기타 enumerate() 함수 (1-1)

l = ['Alice', 'Bob', 'Charlie']

for name in l:
    print(name)

for i, name in enumerate(l):
    print(i, name)

# 기타 enumerate() 함수 (1-2)

for i, name in enumerate(l, 1):
    print(i, name)

for i, name in enumerate(l, 42):
    print(i, name)

# 이중 loop

sr = ['father', 'mother', 'brother']
cnt = 0
for s in sr:
        for c in s:
            if c == 'r':
                cnt += 1
print(cnt)

# 1,2차원 리스트 만들기

a = []    # 빈 리스트 생성
 
for i in range(10):
    a.append(0)    # append로 요소 추가
 
print(a)

# 기타 range() 함수 (1-1)

print(list(range(0, 10, 3)))

# 기타 range() 함수 (1-2)

print(list(range(10, 0, -3)))

# 기타 range() 함수 (1-3)

for i in range(10, 0, -3):
		print(i)
