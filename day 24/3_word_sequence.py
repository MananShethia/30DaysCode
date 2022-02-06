n = int(input())

words = []
for i in range(n):
    x = input()
    words.append(x)

new_word = []
count = 0
word = ""
for j in words:
    jl = len(j)
    word = ""
    for i in range(jl):
        word += words[i][count]
    count += 1
    new_word.append(word)

for w1, w2 in zip(words, new_word):
    if w1 != w2:
        print("false")
        break
else:
    print("true")