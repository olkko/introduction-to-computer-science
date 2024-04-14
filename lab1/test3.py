def non_zerooo(lista, n):
    ile = 0
    mi = lista[0]
    ma = lista[0]
    for i in range(n):
        x = lista[i]
        if x!=0:
            ile +=1
        if x>ma:
            ma = x
        if x<mi:
            mi = x
    return (ile, ma, mi)
print(non_zerooo([1,2,3,4,5,0,9,8,0], 9))