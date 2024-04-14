def sum_of_tuples(lista_p):

    result_list = []
    for i in lista_p:
        sum_of_two_element = i[0] + i[1]
        result_list.append(sum_of_two_element)
    return result_list

def main():
    print(sum_of_tuples([(1,2),(3,4),(5,6),(7,8)]))
    print(sum_of_tuples([('a','b'), ('a','c'), ('b','c')]))
main()
