#include <iostream>

int nod(long long a,long long b)
{
	if(b == 0)
		return a;
	else { 
		a %= b;
		std::swap(a, b);
	}
}


int main()
{
	printf("%d\n", nod(34253332, 4324125));
}		
