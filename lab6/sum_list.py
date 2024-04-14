def sum_list(lista):
    if lista != []:
        return lista[0] + sum_list(lista[1:])
    else:
        return 0

def sum_list_tail(lista, sum=0):
    if lista == []: 
        return sum 
    #i = 0
    #while i < len(lista):
    return sum_list_tail(lista[1:], sum + lista[0])



def main():
    print(sum_list([1,2,3,4,5]))
    print(sum_list([]))
    print(sum_list_tail([1,2,3,4,5]))
    print(sum_list_tail([]))
main()