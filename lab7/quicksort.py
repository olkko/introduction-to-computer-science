def quicksort(lista):
    gre = []
    less = []
    first_element_l = lista[1:]
    first_element_g = gre[1:]
    first_element_l = less[1:]
    for i in range (lista[1:]):
        if i < first_element_l:
            less.append(i)
        else:
            gre.append(i)
        return gre
    quicksort(gre)
    quicksort(less)


def main():
    print(quicksort([7,6,9,3,1,5,7,12,8]))
main()