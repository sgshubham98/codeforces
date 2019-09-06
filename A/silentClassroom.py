t = int(input())

def calculate(l):
    res = 0
    for i in range(len(l)):
        if l[i] >= 2:
            res += (2**(l[i]//2-1)-1) + (2**(l[i]-(l[i]//2)-1)-1)
    print(res)

inputList = []
while(t):
    n = input()
    inputList.append(n[0])
    t -= 1

inp = list(set(inputList))
l = []
for _ in range(len(inp)):
    l.append(inputList.count(inp[_]))

calculate(l)