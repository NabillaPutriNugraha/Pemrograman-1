def Biodata(tahunlahir,Namaku,Asal):
    tahun_sekarang:int=2020
    umur:int=tahun_sekarang-tahunlahir

    print(f"Perkenalkan Nama Saya : {Namaku}")
    print(f"Umur Saya : {umur}")
    print(f"Saya Adalah Angkatan : {tahun_sekarang}")
    print(f"Asal Saya dari : {Asal}")
    print(" ")

tahunlahir=int(input())
Namaku=input()
Asal=input()
print(" ")
Biodata(tahunlahir,Namaku,Asal)