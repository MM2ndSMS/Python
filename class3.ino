# 파이썬(Python) print 함수 사용법 예제 - (1)

print('Hello Python!')
print("Nice to meet you.")
print('Hello "Python"')
print("Hello 'Python'")
print('Hello', 'Python!')
print('Hello' + 'Python!')


# 파이썬(Python) print 함수 사용법 예제 - (2)

print("화면에 직접 출력")
print('ab\'c')
print("doesn't")
print('does')
print('doesn\'t')
print("'string'")
print("\"string\"")
print('"string"') 

# 파이썬(Python) print 함수 사용법 예제 - (3)

s1=’화면에 직접 출력’
s2=’ab\’c’
s3=’does’
print(s1)
print(s2)
print(s3)
print(s1[0]) # 첫 글자
print(s2[1]) # 두 번째 글자
print(s3[1:3])
print(s3[-1]) # 마지막 글자
print(s3[-2]) # 뒤에서 두 번째

# 파이썬(Python) print 함수 사용법 - 숫자

a=2
b=3.14
c=a+b
print(a)
print(b)
print(c)
print(round(c,2))
print(”%.2f” %(c))
print(a+b)
print(a,b,a+b,c)
d=1e2
e=1e-2
print(d)
print(e)

# 파이썬(Python) print 함수 사용법 혼합 - (1)

item1= ‘사과’
price1= 1000
item2= ‘바나나’
price2= 500
print(item1, price1)
print(item2, price 2)

# 파이썬(Python) print 함수 사용법 혼합 - (2)

item1= ‘사과’
price1= 1000
item2= ‘바나나’
price2= 500
str1 = ‘{0}는 {1}원입니다.’
print(str1.format(item1, price1))
print(str1.format(item2, price2))

# 파이썬(Python) print 함수 사용법 혼합 - (3)

item1= ‘사과’
price1= 1000
item2= ‘바나나’
price2= 500
print(item1, price, sep=’ , ’, end=’\’)
print(item2, price2)

# 파이썬(Python) print 함수 사용법 혼합 - (4)

item1= ‘사과’
price1= 1000
item2= ‘바나나’
price2= 500
str2 = ‘%s는 %d원입니다.’
print(str2% (item1, price1))
print(str2% (item2, price2))






























