int print_last_digit(int n)
{
	int lDigit;

	if (n < 0)
		n = -n;

	lDigit = n % 10;

	if (lDigit < 0)
		lDigit = -lDigit;

	_putchar(lDigit + '0');

	return (lDigit);
}
