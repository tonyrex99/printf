/**
 * digits_count - Returns number of digits for an int
 * @d: Number
 *
 * Return: Number of digits
*/
int digits_count(unsigned int d)
{
	int count = 0;

	if (d == 0)
		return (1);

	while (d / 10 != 0)
	{
		count++;
		d /= 10;
	}

	return (d + 1);
}
