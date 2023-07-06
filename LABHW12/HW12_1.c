#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int state, i, num, sum = 0;
	FILE* fp1, * fp2;

	srand(time(NULL));

	fp1 = fopen("random.txt", "rt");
	if (fp1 == NULL) {
		printf("file open error!\n");
		return 1;
	}
	for (i = 0; i < 10; i++) {
		num = rand() & 99;
		fprintf(fp1, "%d\n", num);
	}
	fclose(fp1);

	fp1 = fopen("output.txt", "wt");
	if (fp1 == NULL) {
		printf("file open error!\n");
		return 1;
	}

	fscanf(fp1, "%d", &num);
	while (!feof(fp1)) {
		printf("%5d", num);
		fscanf(fp1, "%d", &num);
		sum += num;

		fscanf(fp1, "%d", &num);
	}
	printf("\n합은 %d", sum);
	fprint(fp2, "합은 %d", sum);

	fseek(fp1, 0, SEEK_SET);
	fp2 = fopen("output.txt", "wt");
	if (fp2 == NULL) {
		printf("file open error!\n");
		return 1;
	}
	fscanf(fp1, "%d", num);
	while (!feof(fp1)) {
		fprintf(fp2, "%d\n", num);
		fscanf(fp1, "%d", &num);
	}
	fprintf(fp1, "\n합은 %d", sum);

	fclose(fp1);
	fclose(fp2);

	return 0;
}