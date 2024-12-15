#fungsi buat ngitung jumlah zetsu putih
def hitung_zetsu(ruangan, zetsu_counts) :
    result = []
    for i in range(ruangan) :
        result.append(zetsu_counts[i] * (i + 1))
    return result

#buat nginput jumlah ruangan
ruangan = int(input(" "))

#buat nginput julah zetsu putih di setiap ruangan
zetsu_counts = list(map(int, input(" ").split()))

#buat ngitung jumlah zetsu putih setalah membelah diri
result = hitung_zetsu(ruangan, zetsu_counts)

print()
#buat nyetak hasil
print(' '.join(map(str, result)))