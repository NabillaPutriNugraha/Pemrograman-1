#fungsi buat perkalian dua baris
def kali_baris(baris1, baris2) :
    return[baris1[i] * baris2[i] for i in range (len(baris1))]

#buat nginput bilangan n1 dan n2
n1, n2 = map(int, input(" ").split())

if n1 != n2 :
    print("Jumlah tidak sama")
else :
    #buat nginput baris pertama
    baris1 = list(map(int, input().split()))

    #buat nginput baris kedua
    baris2 = list(map(int, input().split()))

    #perkalian
    result = kali_baris(baris1, baris2)

    print()
    #nyetak hasil
    print(' '.join(map(str,result)))
