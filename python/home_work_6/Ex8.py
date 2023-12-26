a = int(input())
c = 0
for i in range(1, int(a ** 0.5) + 1):
    if a % i == 0:
        c += 2
    if c > 2:
        print('composite')
        exit(0)
print('prime')
