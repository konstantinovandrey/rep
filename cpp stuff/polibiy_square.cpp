#include <iostream>
#include <list>
#include <iterator>
#include <cstring>

#define n 6
#define m 6

void sub(char* key1[6], char phrase[])
{
	printf("djfkdfj");
	for(int i = 0; phrase[i] != 0; i++) {
		for(int i1 = 0; i1 < n; i1++) {
			char *key2[6]; 
			memcpy(key2,key1,24);
			for(int i2 = 0; i2 < m; i2++) {
				if(key2[i1][i2] == phrase[i])
					printf("%d%d ", key2[i1][i2]);
			}
		}
	}
}

// void desub(char *key, char *phrase, int n, int m)
// {
// 	for(int i = 0; phrase[i] != 0; i++) {
// 		for(int i1 = 0; i1 < n; i1++) {
// 			char *key2[][6] = key;
// 			for(int i2 = 0; i2 < m; i2++) {
// 				if(phrase)
// 			}
// 		}
// 	}
// }


int main() 
{
// 	while(1) {
		char square[n][m] = {{'à','á','â','ã','ä','å'},
							 {'¸','æ','ç','è','é','ê'},
							 {'ë','ì','í','î','ï','ð'},
							 {'ñ','ò','ó','ô','õ','ö'},
							 {'÷','ø','ù','ú','û','ü'},
							 {'ý','þ','ÿ',',','.','-'}};
// 		int arr[2][2] = {{1,2}, {3,4}};
// 		char square[n][m] = {"àáâãäå¸æçèéêëìíîïðñòóôõö÷øùúûüýþÿ,.-"};
		std::cout << "Phrase: ";
		char phrase[100];
		fgets(phrase , 99, stdin);
		sub((char **)square, phrase);
// 		copy(phrase.begin(), phrase.end(), std::ostream_iterator<char>(std::cout, ""));
// 	}
}
