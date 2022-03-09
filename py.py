def terSearch(x):
    arr = [1, 2, 3, 5, 6, 7, 8, 10, 12, 13, 15, 16, 18, 19, 20, 22]
    a = 0
    d = len(arr) - 1
    res = 0
    while (a <= d and res == 0):
        step = int((d - a + 1) / 3)
        b = 1 + step + a
        c = 1 + 2 * step + a
        if (x == arr[0]):
            res = 1
        if (x == arr[b]):
            res = b + 1
        elif (x == arr[c]):
            res = c + 1
        elif (x > arr[c]) :
            a = c + 1
        elif (x > arr[b]):
            b = a + 1
            d = c - 1
        else:
            d = b - 1
    
    return res

print(terSearch(15))