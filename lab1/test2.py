def rev(l):
    return [l[-1]] + rev(l[:-1]) if l else []
def main():
    print(rev([1,2,3,4,5,6]))
main()