a = [1, 2, 2, 3, 4, 4, 4, 5, 5, 6, 6, 6, 7, 8, 8, 9, 9, 9, 9]

print(a)

for i in range(len(a)):
    for j in range(i + 1, len(a)):
        if a[i] == a[j]:
            a[j] = 0

print(a)
