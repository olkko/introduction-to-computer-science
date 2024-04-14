def wariancja_r(lista, lenght, sum=0):
    if lista == []: 
        return [sum/lenght, 0] 
    sr_war = wariancja_r(lista[1:], lenght, sum + lista[0])
    sr_war[1] += (lista[0]-sr_war[0])**2 / lenght
    return  sr_war
    
def main():
    print(wariancja_r([3,3,3,3], len([3,3,3,3])))
    print(wariancja_r([5,6,7,8,9], len([5,6,7,8,9])))
main()