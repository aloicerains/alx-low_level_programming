/**
 * schoolName -Entry point
 * return - void
 */
void schoolName(void)
{
	char s[12] = "Holberton";
	int i = 0;

	while (i < 9)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
