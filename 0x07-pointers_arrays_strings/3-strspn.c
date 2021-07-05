/**
 * _strspn - Function gets lenght of prefix substring
 * @s: pointer to initial segment
 * @accept: pointer to source
 *
 * Return: Unsigned integer indicating number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (*(s + i))
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
			j++;
		}
		if (!*(accept + j))
		{
			return (i);
		}
		i++;
	}
	return (i);
}
