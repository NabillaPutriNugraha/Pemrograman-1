nilai = input()
nilai = int(nilai)
if nilai >= 1 and nilai <=9 :
    print("Satuan")
elif nilai == 10 or nilai >=20 and nilai <= 99 :
    print("Puluhan")
elif nilai >= 11 and nilai <= 19 :
    print("Belasan")
elif nilai == 0 :
    print("Nol")
else :
    print("Anda Menginput Melebihi Limit Bilangan")