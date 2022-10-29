#include "libft.h"
void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dst1;
	unsigned char *src1;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (dst > src)
	{
		while (len > 0)
		{
			dst1[len - 1] = src[len - 1];
			len--;
		}
	}
	else
	{
		ft_memcpy(dst1, src1, len);
	}
	return (dst);
}
