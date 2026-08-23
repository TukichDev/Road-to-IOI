numbers = input().strip().split()
curent_sequence = [int(numbers[0])]
max_sequence = []
curent_length = 1
max_length = 1

for i in range(0, len(numbers) - 1):

    try:
        if int(numbers[i]) < int(numbers[i + 1]):
            curent_length += 1
            curent_sequence.append(int(numbers[i+1]))
            if curent_length > max_length:
                max_length = curent_length
                max_sequence = curent_sequence.copy()
            else:
                pass
        else:
            curent_length = 1
            curent_sequence = []
            curent_sequence.append(int(numbers[i + 1]))
    
    except ValueError:
        print("Wrong data form")

if not max_sequence:
    max_sequence = curent_sequence
    print(max_length)
    print(max_sequence)
else:
    print(max_length)
    print(max_sequence)