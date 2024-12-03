def ganjil_genap(batas) :
    bilangan_ganjil = [i for i in range(1, batas + 1) if i % 2 != 0]
    print(" ", " ". join(map(str, bilangan_ganjil)))
    bilangan_genap = [i for i in range(batas, 1, -1)if i % 2 == 0]
    print(" ", " ". join(map(str, bilangan_genap)))
batas = int(input(" "))
ganjil_genap(batas)
    