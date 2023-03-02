#include "libft.h"

//itoa
/* int	main(void)
{
	int		n = 0;
	char	*num;

	num = ft_itoa(n);
	printf("num: %s\n", num);
	return 0;
} */

//memmove
/* int	main(void)
{
	char	dest[] = "abcde";
	char	dest2[] = "abcde";
	char	*src = dest + 2;
	char	*src2 = dest2 + 2;

	printf("src: %s\n", src);
	printf("dest2 before: %s\n", dest2);
	printf("dest before: %s\n", dest);
	memmove(dest2, src2, 3);
	ft_memmove(dest, src, 3);
	printf("dest2 after: %s\n", dest2);
	printf("dest after: %s\n", dest);
	return (0);
} */

//memset
/* int    main(void)
{
    char *b1 = (char *)malloc(sizeof(char) * 983040 + 1);
    char *b2 = (char *)malloc(sizeof(char) * 983040 + 1);

    *b1 = 0;
    *b2 = 0;
    memset(b1, 5, 983040);
    ft_memset(b2, 5, 983040);
    
    printf("b1 after: :%s:\n", b1);
    printf("b2 after: :%s:\n", b2);
    return (0);
} */

//ft_split
/* void	main(void)
{
	char	*s = "  123 456     789   ";
	char	c = ' ';
	char	**new = ft_split(s, c);

	for (int i = 0; new[i + 1]; i++)
	{
		printf("%s\n", new[i]);
	}
	return ;
} */

//ft_strncmp
/* int	main(void)
{
	char	str1[] = "abcdefgh";
	char	str2[] = "abcdwxyz";

	printf("ft_strncmp: %i\n", ft_strncmp(str1, str2, 4));
	printf("strncmp: %i\n", strncmp(str1, str2, 4));
	return (0);
} */

//ft_substr
/* int	main(void)
{
	char	str1[] = "lorem ipsum dolor sit amet";

	printf("ft_substr: %s\n", ft_substr(str1, 400, 20));
	return (0);
} */

//ft_strtrim
/* int	main(void)
{
	char	str1[] = "lorem ipsum dolor sit amet";

	printf("ft_strtrim: %s\n", ft_strtrim(str1, "te"));
	return (0);
} */

//lists
/* void	ft_del(void *content)
{
	free(content);
}

int main(void)
{
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;
	char		*str = strdup("lorem");
	char		*str2 = strdup("ipsum");
	char		*str3 = strdup("dolor");
	char		*str4 = strdup("sit");
	elem = ft_lstnew(str);
	elem2 = ft_lstnew(str2);
	elem3 = ft_lstnew(str3);
	elem4 = ft_lstnew(str4);
	elem->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;

	ft_lstclear(&elem3, &ft_del);
	return (0);
} */

//strlcat
int	main(void)
{
	char b[0xF] = "nyan !";

	printf("ft_strlcat: %zu\n", ft_strlcat(((void *)0), b, 0));
	return (0);
}
