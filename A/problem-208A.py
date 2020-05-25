s = input()
s = s.replace("WUB", " ").split()
for _ in range(len(s)):
    print(s[_],end=' ')