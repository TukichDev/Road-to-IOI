numbers = input().split()
total = 0
for i in range(len(numbers)):
    if int(numbers[i]) % 2 == 0:
        total += 1
print(total)

