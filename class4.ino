# 파이썬(Python) 연산자 사용법 - 산술 연산자 (더하기, 뺴기, 곱하기, 나누기)

print(4 / 3)
print(1 / 2)
print(4 / 2)
print(7 // 3)
print(7 % 3)
print(2 ** 10)

# 파이썬(Python) 연산자 사용법 - 산술 연산자 (몫, 나머지, 제곱) - 1


a = 11 + 2
b = 12 - 2
c = 13 * 2
d = 14 / 2
e = 15 ** 2
f = 16 // 2
g = 17 % 3

print(a, b, c, d, e, f, g)

# 파이썬(Python) 연산자 사용법 - 산술 연산자 (몫, 나머지, 제곱) - 2

quotient, remainder = divmod(5, 2)
print(quotient, remainder)

# 파이썬(Python) 연산자 사용법 - 대입 연산자

a = 1024

a += 1024
print(a)

a -= 1024
print(a)

a *= 4
print(a)

a /= 2
print(int(a))

a //= 2
print(a)

a %= 1022
print(a)

a **= 10
print(a)

# 파이썬(Python) 연산자 사용법 - 관계 및 논리 연산

a = 1
b = 3
print("10 == 3 =>", a == b)
print("10 != 3 =>", a != b)
print("10 > 3 =>", a > b)
print("10 >= 3 =>", a >= b)
print("10 < 3 =>", a < b)
print("10 <= 3 =>", a <= b)
print()

# 파이썬(Python) 연산자 사용법 - 비트 연산자

a = 13
print(bin(a))
print(hex(a))

int('1101', 2)

# 파이썬(Python) 연산자 사용법 - 논리 연산

a = 16
b= 2

print(bin(a))
print(bin(b))
print(bin(a&b))
print(' ')
print(a&b)

print(' ')
print(bin(a))
print(bin(b))
print(bin(a|b))
print(' ')
print(a|b)

print(' ')
print(bin(a))
print(bin(b))
print(bin(a^b))
print(' ')
print(a^b)

print(' ')
print(bin(a))
print(bin(~a))
print(' ')
print(~a)
