def NumbersToWord(numbers):
    dictionary = {0:"zero", 1:"jeden", 2:"dwa", 3:"trzy", 4:"cztery", 5:"piec", 6:"szesc", 7:"siedem", 8:"osiem", 9:"dziewiec"}
    if(numbers==0):
        return ""
     
    else:
        last_number = dictionary[numbers%10]
    other_numbers = NumbersToWord(int(numbers/10)) + last_number + " "

    return other_numbers

def main():

    print( NumbersToWord(int(123)))
main()

