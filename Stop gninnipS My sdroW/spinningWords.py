def spin_words(sentence):
    #word = list(sentence.split())
    #for i in range(len(word)):
    #    if len(word[i]) >= 5:
    #        word[i] = word[i][::-1]
    #toReturn = ""
    #if len(word) == 1:
    #    return word[0]
    #for j in range(len(word)):
    #    toReturn += word[j] + ' '
    #    if j == len(word):
    #        toReturn += word[j]
    #        break
    #return toReturn

    #top answer in Code Wars sorted by Best Practices
    return " ".join([x[::-1] if len(x) >= 5 else x for x in sentence.split(" ")])

returned = spin_words("Hey fellow warriors")
print(returned)
