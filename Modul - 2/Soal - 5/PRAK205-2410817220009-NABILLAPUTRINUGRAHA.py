import math

a = float(input())
b = float(input())
c = math.sqrt((b*b)-(a*a))
keliling = a + b +c
luas = 0.5 * c *a

print("Alas = %.0f cm"%(c))
print("Tinggi = %.0f cm"%(a))
print("Keliling = %.0f cm"%(keliling))
print("Luas = %.0f cm^2"%(luas))
