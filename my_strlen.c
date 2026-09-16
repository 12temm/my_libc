int
my_strlen(const char *size_t)
{
	int length = 0;
	if (size_t[length] == '\0') {
		return 0;
	} else {
		while (size_t[length] != '\0') {
			length++;
		}
	}
	return length;
};
