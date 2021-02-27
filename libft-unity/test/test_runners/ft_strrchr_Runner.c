#include <string.h>
#include <stdlib.h>
#include "tests.h"
#include "utils.h"

void	*to_free;

void	setUp()
{
	to_free = NULL;
}

void	tearDown()
{
	free(to_free);
}

int main(void)
{
	catch_signals();

	UNITY_BEGIN();

	RUN_TEST(ft_strrchr_simple_test);
	RUN_TEST(ft_strrchr_null);
	RUN_TEST(ft_strrchr_null_byte);
	RUN_TEST(ft_strrchr_8bits);

	return (UNITY_END());
}
