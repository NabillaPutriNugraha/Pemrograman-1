import math
radius = float (input())
tinggi = float (input())
volume = 22 * radius*radius*tinggi/7
luas = 2*22*radius*(radius + tinggi)/7
keliling = 2*22*radius/7

print("Volume = %.2f"%(volume))
print("Luas = %.2f"%(luas))
print("Keliling = %.2f"%(keliling))
