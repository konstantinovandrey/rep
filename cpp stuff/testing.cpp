#include <iostream>

using namespace std;

int main()
{
	struct car {
		char model[4];
		int GasMilage;
		int doors;
	};

	car CarInstance;
	CarInstance.model[0] = 'l';
	CarInstance.model[1] = 'a';
	CarInstance.model[2] = 'd';
	CarInstance.model[3] = 'a';
	CarInstance.doors = 2;
	CarInstance.GasMilage = 3;

	printf("CarInstance: %d\nGasMilage: %d\n", &CarInstance, &CarInstance.GasMilage);

	int x = *(int *)((char*)&CarInstance + 4);

	printf("%d",x);

// 	int input = 7524;
// 	int *p = &input; 
// 	char *cp = (char*)&p; 
// 	long *l = (long*)&input;
// 	long long *nipt = (long long*)&input;
// 	printf("p: %d\np+1: %d\ncp: %d\nc+1: %d\nll: %d\nll+1: %d\nl: %d\nl+1: %d\n", p, p+1, cp, cp+1, nipt, nipt+1, l, l+1);
    
// 	printf("d: %d\na: %d\n", &structure[1].d, &structure[1].a);
}
