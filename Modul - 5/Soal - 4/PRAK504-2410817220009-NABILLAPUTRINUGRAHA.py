def reverse(a) :
    balik=0
    while a!=0:
        angkaterakhir=a%10
        balik=balik*10+angkaterakhir
        a=a//10
    return balik



A,B=map(int,input().split())
A=reverse(A)
B=reverse(B)
C=A+B
print(f"{reverse(C)}")