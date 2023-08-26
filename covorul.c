#include <stdio.h>

int main()
{
	unsigned n, m, lgmax;
	unsigned long long ariacam, ariacov, nrcov;

	scanf("%u %u", &n, &m);

	lgmax = n;

	if (m < lgmax) lgmax = m;
	
	printf("%u", lgmax);

	ariacam = n*m;

	ariacov = lgmax*lgmax;

	nrcov = ariacam / ariacov;

	ariacam = ariacam % ariacov;

	while (ariacam) {
		lgmax = 1;

		while (lgmax*lgmax < ariacam) lgmax++;

		lgmax = lgmax - 1;

		ariacov = lgmax*lgmax;

		nrcov += ariacam / ariacov;

		ariacam = ariacam % ariacov;
	}

	printf(" %llu", nrcov);

	return 0;
}

// scor 60
