def main() :
    #buat nginput kode sama pesan
    kode = input()
    pesan = input()

    #buat meriksa panjang kode sama pesan
    if len(kode) != len(pesan):
        print("Panjang kalimat berbeda, pesan palsu")
        return
    
    #inisialisasi variabel buat ngitung jumlah bintang sama pagar
    bintang = 0
    pagar = 0
    result = []

    #buat meriksa karakter dan bandingkan
    for i in range(len(kode)) :
        if kode[i] == ' ' and pesan[i] ==' ':
            result.append(' ')
        elif kode[i] == pesan[i] :
            result.append('*')
            bintang += 1
        else :
            result.append('#')
            pagar += 1

    #output
    print("".join(result))
    print(f"* = {bintang}")
    print(f"# = {pagar}")

    if bintang >= pagar:
        print("Pesan Asli")
    else :
        print("Pesan Palsu")
main()
