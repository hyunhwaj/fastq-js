#include <cstdio>
#include <ctime>

int main() {
	char line[10000];
	int count = 0;	
	clock_t begin = clock();
	while( fgets(line, 10000, stdin) != NULL ) ++count;
	printf("reads count : %d\n", count);
	clock_t end = clock();
	printf("%.3f secs\n", 1. * (end-begin)/CLOCKS_PER_SEC);
	return 0;
}
