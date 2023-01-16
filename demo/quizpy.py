numbers = [10, 6, 15, 8]

k = 25

for m in numbers[:3]:
    for n in numbers[1:]:
        sum = n+m
        if sum == k:
            print(True)
            print(m, n)
        if sum != k:
            print(f'False the numbers are {m}, {n}')