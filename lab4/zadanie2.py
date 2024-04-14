def WariancjaSrednia(tablica):

    suma_tablicy = 0
    N = len(tablica)

    for i in tablica:
        suma_tablicy += i
    srednia = suma_tablicy / N

    for x in tablica:
        roznica = (x- srednia)**2
    wariancja = roznica / (N - 1)

    return srednia,  wariancja
    

def main():
    o = WariancjaSrednia([3,3,3,3])
    y = WariancjaSrednia([5,6,7,8,9])

    print("Średnia wynosi: ", o[0], y[0] )
    print("Wariancja wynosi:", o[1], y[1] )
main()