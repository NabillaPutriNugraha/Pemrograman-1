#fungsi buat nyetak matriks
def print_matriks(matriks):
    for baris in matriks :
        print(' '.join(map(str, baris)))
#buat nginput jumlah baris sama kolom
baris, kolom = map(int, input(" ").split())
#buat nginput elemen matriks
elemen = list(map(int, input(" ").split()))
#buat ngebuat matriks
matriks = []
for i in range(baris):
    baris = elemen[i * kolom:(i + 1)* kolom]
    matriks.append(baris)

print()
#buat nyetak baris
print_matriks(matriks)

