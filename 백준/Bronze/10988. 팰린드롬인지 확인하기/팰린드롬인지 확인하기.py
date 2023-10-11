def isPalindrome(w):
    for i in range(len(w)//2):
        if w[i] != w[-(i+1)]:
            return 0
    return 1


word = input()
result = isPalindrome(word)
print(result)