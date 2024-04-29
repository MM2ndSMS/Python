# 문자열 길이 계산- len()
#len() : Returns the length of the string

a = 'I Love Python'
print( len(a) )

# 문자열 길이 계산- len() 예제

name = 'BlockDMask'
phone = '010 7283 0455'
address = 'korea'
print(len(name))
print(len(phone))
print(len(address))

# 함수 예제1 : 리스트

# min(arg1, arg2)
a = [1, 2, 3]
b = [4, 5, 6]
print(min(a, b)) # 반환 : [1,2,3]

# 함수 예제2 : 문자열

# min(arg1, arg2)
c = 'BlockDMask'
d = 'BAAAlockDMask'
print(min(c, d)) # 반환 : 'B'

# 함수 예제3 : 타입이 다른 경우

# min(arg1, arg2)
e = [3, 2, 1]
f = ['a', 3, 2, 1]
print(min(e, f))

# 함수 예제4 : 값이 하나만 있는 경우

# min(arg1, arg2)
z = [3,4,5, 'a','b','c']
print(min(z))

# 함수 예제5 : 인자가 N 개

# min(arg1, arg2, ...)
g = [2, 3, 4]
h = [2, 2, 2, 2, 2]
i = [9, 8, 7, 6, 5]
j = [1]
k = [0]
print(min(g, h, i, j, k))

# count()
myString = "everyday"
print(myString.count('e'))

# count() 함수 예제 1

# 문자열 'BlockDMask' 선언
a = 'BlockDMask'
print('#1 a.count("k")')
print(a.count('k'))        # 문자열에서 'k'가 몇개 있는지 ?
print('#2 a.count("DM")')
print(a.count('DM'))       # 문자열에서 'DM'가 몇개 있는지 ?

# count() 함수 예제 2

# 문자열에서 특정 범위 내부에 'k' 가 몇개 있는지?
a = 'BlockDMask'
print("#1 a[2] + ' ~ ' + a[4]")
print(a[2] + ' ~ ' + a[4])
print("#2 a.count('k', 2, 3)")
print(a.count('k', 2, 3))
print("#3 a.count('k', 2, 4)")
print(a.count('k', 2, 4))
print("#4 a.count('k', 2, 5)")
print(a.count('k', 2, 5))

# find 예제1 
str= "BlockDMask Blog."; 
print(f"str : {str}\n") 

print("1. str.find('찾을 문자')") 
result1 = str.find('a') 

# 문자가 있는 경우 
result2 = str.find('Z') 

# 문자가 없는 경우 
print(f"str.find('a') : {result1}") 
print(f"str.find('Z') : {result2}") 
result3 = str.find('ask') 

# find 예제2
str= "BlockDMask Blog."; 
print(f"str : {str}\n") 

# 문자열이 있는 경우 
result4 = str.find('kkk') 
# 문자열이 없는 경우 
print(f"str.find('ask') : {result3}") 
print(f"str.find('kkk') : {result4}") 
print()

# find 예제3
str= "BlockDMask Blog."; 
print(f"str : {str}\n") 

print("2. str.find('찾을 문자', 시작index)") 
result5 = str.find('o') 
result6 = str.find('o', 5) 
print(f"str.find('o') : {result5}") 
print(f"str[5] : {str[5]}") 
print(f"str.find('o', 5) : {result6}") 
print() 

# find 예제4
str= "BlockDMask Blog."; 
print(f"str : {str}\n") 

print("3. str.find('찾을 문자', 시작 index, 끝 index)") 
result7 = str.find('o') 
result8 = str.find('o', 5, 11) 

# find 예제5
str= "BlockDMask Blog."; 
print(f"str : {str}\n") 

print(f"str.find('o') : {result7}") 
print(f"str[5]~str[11] : {str[5]} ~ {str[11]}") 
print(f"str.find('o', 5, 11) : {result8}")

# find 예제6
str= "BlockDMask Blog."; 
print(f"str : {str}\n") 

print("3. str.find('찾을 문자', 시작 index, 끝 index)") 
result7 = str.find('o') 
result8 = str.find('o', 5, 11) 

# find 예제7
str= "BlockDMask Blog."; 
print(f"str : {str}\n") 

print(f"str.find('o') : {result7}") 
print(f"str[5]~str[11] : {str[5]} ~ {str[11]}") 
print(f"str.find('o', 5, 11) : {result8}")

# index() 예제 1
# 리스트.index(x)
# 데이터 x의 위치 반환
nums_list = [1,2,3,3,3,5,6,8,9]
nums_tuple = (1,2,3,3,3,5,6,8,9)
nums_set = {1,2,3,5,6,8,9}

print(nums_list.index(2))  # 1 
print(nums_list.index(3))  # 2
# -> 찾고자하는 데이터가 여러개 존재할 경우, 가장 작은 위치 값 반환 

print(nums_tuple.index(2)) # 1
print(nums_tuple.index(3)) # 2

print(nums_set.index(2)) # 1
print(nums_set.index(3)) # 2

# index() 예제 2
#문자열에서 사용
str = 'kangminheee'
print(str.index('k'))  #0
print(str.index('h'))  #7
print(str.index('i'))  #5
#print(str.index('l')) 없는 걸 찾으면 error
print(str.index('e'))  #8 -> 여러개면 제일 첫번째것 반환
print(str.find('e'))   #8 -> find()는 index()와 같은 기능을 가진 함수
print(str.rfind('e'))  #10 -> 여러개중 가장 오른쪽 것 반환

# startswith() 
str = 'Hello world, Python!'

if str.startswith('Hello'):
    print('It starts with Hello')

if not str.startswith('Python'):
    print('It does not start with Python')

# endswith()
str = "this is string example....wow!!!"

suffix = "wow!!!"
print(str.endswith(suffix))
print(str.endswith(suffix,20))

suffix = "is"
print(str.endswith(suffix, 2, 4))
print(str.endswith(suffix, 2, 6))

# rfind()
text = 'Welcome to Codetorial'

pos_e_last = text.rfind('e')
print(pos_e_last)

pos_e_first = text.find('e')
print(pos_e_first)

pos_to_last = text.rfind('to')
print(pos_to_last)

pos_to_first = text.find('to')
print(pos_to_first)

# rindex()
text = 'Welcome to Codetorial'

pos_Code_last = text.rindex('Code')
print(pos_Code_last)

pos_code_last = text.rindex('Code')
print(pos_code_last)
