def lata_przestępne(start_year, stop_year):
    lista = [x for x in range (start_year, stop_year+1) if x % 4 == 0 and x % 100 != 0 and (x/400)%100 == 0]
    return lista

def main():
    start_year = int(input("Enter start year: "))
    stop_year = int(input("Enter stop year: "))
main ()