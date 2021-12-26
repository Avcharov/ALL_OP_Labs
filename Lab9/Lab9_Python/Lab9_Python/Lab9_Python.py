str = input('String: ')
n = int(input('Length of word: '))
for word in str.split():
    if len(word) < n:
        print(word)
