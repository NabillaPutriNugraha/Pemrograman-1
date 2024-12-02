def kelipatan_dengan_simbol(n, simbol) :
    for i in range(1, 51) :
        if i % n == 0 :
            print(simbol, end = " ")
        else :
            print(i, end = " ")
    
kelipatan, simbol = input(" ").split()
kelipatan = int(kelipatan)
kelipatan_dengan_simbol(kelipatan, simbol)