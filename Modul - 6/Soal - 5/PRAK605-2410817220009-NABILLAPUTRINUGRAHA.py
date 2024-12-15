#fungsi buat mengkali dua matriks
def kali_matriks(A, B, n) :
    result = [[0] * n for _ in range(n)]
    for i in range(n) :
        for j in range(n) :
            for k in range(n) :
                result[i][j] += A[i][k] * B[k][j]
    return result

#buat ngnput ordo matriks
n = int(input(" "))

#buat nginput matriks A
print("Matriks A :")
A = [list(map(int, input().split()))for _ in range(n)]

#buat nginput matriks B
print("Matriks B :")
B = [list(map(int,input().split())) for _ in range(n)]

#buat ngitung hasil kali
result = kali_matriks(A, B, n)

#nyetak hasil
print("Matriks A x B :")
for baris in result :
    print(' '.join(map(str, baris)))