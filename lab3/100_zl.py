def comb(L):
      
    for i in range(1, maxlength + 1):
        for j in range(1, maxlength + 1):
            for k in range(1, maxlength + 1):
                  
                # check if the indexes are not
                # same
                if (i!=j and j!=k and i!=k):
                    print(L[i], L[j], L[k])
                      
# Driver Code
comb([2, 5, 10])