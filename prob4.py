t=int(input(''))

pal=[]

for i in range(100,1000):
	for j in range(100,i+1):
		if(str(i*j)==str(i*j)[::-1]):
			if(len(str(i*j))==6):
				pal.append(i*j)
pal.sort()

for i in range(t):
	p=0
	n=int(input(''))
	for j in range(len(pal)):
		if(pal[j]>=n):
			p=p+1
			print(pal[j-1])
			break
	if(p==0):
		print(pal[len(pal)-1])