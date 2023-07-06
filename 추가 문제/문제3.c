int main(void)
{
	int num;
	int count = 0;

	scanf("%d", &num);
	while (num != solution(num)) {
		num += solution(num);
		if (num < 0)
			break;
	}
	count++;

	if (num < 0)
		printf("Overflow");
	else
		printf("%d %d", count, num);
}