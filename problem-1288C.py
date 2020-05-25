f = [1]
MOD = 1000000007
def fact():
	for i in range(1,1021):
		f.append(f[i-1]*i)

def main():
	n, m = map(int, input().split())
	x = f[2*m+n-1]
	y = f[2*m]
	z = f[n-1]
	print((x//(y*z))%MOD)

fact()
main()