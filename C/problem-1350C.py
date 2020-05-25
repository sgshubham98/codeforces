import math

def solve(n): 
    res = []
    while n % 2 == 0: 
        res.append(2), 
        n = n // 2
    for i in range(3,int(math.sqrt(n))+1,2): 
        while n % i== 0: 
            res.append(i), 
            n = n // i 
    if n > 2: 
        res.append(n) 
    return res

lc = []
n = int(input())
l = list(map(int, input().split()))

for i in l:
	lc.append(solve(i))

cnt = [0]*(max(l)+1)

ans = 1
for i in lc:
	for j in i:
		cnt[j] += 1
for i in range(1, max(l)+1):
	if cnt[i]//(n-1) > 0:
		ans *= (i**(cnt[i]//(n-1)))
print(ans)