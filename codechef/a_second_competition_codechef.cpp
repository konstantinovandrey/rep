#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
// 	int t;
// 	cin >> t;
// 	while(t--) {
// 		int n, m;
// 		cin >> n >> m;
// 		int tiles_2_2 = n/2 * m/2;
// 		printf("%d %d %d\n",(int)n/2,(int)m/2, (int)n/2 * (int)m/2);
// 		2*2=5 Whats wrong 
// 		int tiles_2_2 = floor(n/2) * floor(m/2);
// 		cout << n*m - tiles_2_2 * 4 << endl;
		int n, m;
		n = 4;
		m = 5;
		printf("%d %d %d\n", n/2, m/2, n/2*m/2);
		printf("Size of: %d %d %d\n", sizeof(double(n/2)), sizeof(m/2), sizeof(n/2*m/2));
// 	}
}
