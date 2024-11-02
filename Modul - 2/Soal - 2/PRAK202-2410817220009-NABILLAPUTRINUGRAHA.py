NP = float(input("Masukkan Nilai Pertama :"))
NK = float(input("Masukkan Nilai Kedua :"))
hasil = NP + NK

if NP.is_integer():
    print(f"Hasil dari penjumlahan nilai pertama \"{int(NP)}\" dan nilai kedua \"{NK :.1f}\"adalah\"{hasil :.2f}\"")
else :
    print(f"Hasil dari penjumlahan nilai pertama \"{NP :.2f}\" dan nilai kedua \"{NK :.1f}\"adalah\"{hasil :.2f}\"")
