t=int(input(''))
for b in range(t):
	m,k=input('').split(' ')
	n=int(input(''))
	k=int(k)
	m=int(m)
	pro=0
	for i in range(0,m-k):
		temp=1
		for j in range(k):
			temp=temp*int(str(n)[i+j])
		if(pro<temp):
			pro=temp
	print(pro)