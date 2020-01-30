MAX = 100000; 
primes = []

def sieve(): 
	
	isComposite = [False]*(MAX+1); 
	i = 2; 
	while (i * i <= MAX): 
		if (isComposite[i] == False): 
			j = 2; 
			while (j * i <= MAX): 
				isComposite[i * j] = True; 
				j+=1; 
		i+=1; 

	for i in range(2,MAX+1): 
		if (isComposite[i] == False): 
			primes.append(i); 

def LCM(n): 

	lcm = 1; 
	i = 0; 
	while (i < len(primes) and primes[i] <= n): 
		pp = primes[i]; 
		while (pp * primes[i] <= n): 
			pp = pp * primes[i]; 
		lcm *= pp; 
		lcm %= 1000000007; 
		i+=1; 
	return lcm; 


sieve()

t=int(input(''))

for i in range(t):
	n=int(input())
	print(LCM(n))
