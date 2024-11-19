total_detik = int(input())
hari = total_detik // 86400
sisa_detik = total_detik %86400

jam = sisa_detik // 3600
sisa_detik %= 3600

menit = sisa_detik // 60
detik = sisa_detik %60

if hari > 0 :
    print(f"{int(hari)} hari {jam:02}:{menit:02}:{detik:02}")
else :
    print(f"{jam :02}:{menit:02}:{detik:02}")