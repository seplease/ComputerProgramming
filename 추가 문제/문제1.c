int solution(int n)
{
	int result = 0, last;

	while (n != 0) {
		last = n % 10;
		result = result * 10 + last;
		n /= 10;
	}

	return result;
}