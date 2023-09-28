
a = [
    [1, 2, 3, 4, 5],
    [6, 7, 8, 9, 10],
    [11, 12, 13, 14, 15],
    [16, 17, 18, 19, 20],
    [21, 22, 23, 24, 25]
    ]

b = [
    [26, 27, 28, 29, 30],
    [31, 32, 33, 34, 35],
    [36, 37, 38, 39, 40],
    [41, 42, 43, 44, 45],
    [46, 47, 48, 49, 50]
    ]
 def matrix_addition(a, b):
    if len(a) != len(b) or len(a[0]) != len(b[0]):
        return 0
    
    r, c = len(a), len(a[0])

    # Initialize an empty result matrix with the same dimensions
    c = [[0] * cols for _ in range(rows)]

    # Perform element-wise addition
    for i in range(rows):
        for j in range(cols):
            c[i][j] = a[i][j] + b[i][j]

    return c

