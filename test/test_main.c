#include <stdio.h>
#include "libfd.h"

void	deque_test(void)
{
	printf("     *****************************     \n");
	printf("                 Deque                 \n");
	printf("     *****************************     \n\n");
	
	t_deque	*test = deque_init();

	char	*test_array = malloc(6);
	for (int i = 0; i < 5; i++)
		test_array[i] = 'a' + i;
	test_array[5] = '\0';

	printf("deque is currently %s\n", (deque_empty(test) ? "empty" : "not empty"));
	printf("deque size is currently %d\n", deque_size(test));

	deque_push_back(test, test_array);
	
	//Result should be abcde abcde
	printf("%s %s\n", (char*)test->begin->content, (char*)test->end->content);

	char	*test_array2 = malloc(6);
	for (int i = 0; i < 5; i++)
		test_array2[i] = 'z' - i;
	test_array[5] = '\0';

	deque_push_back(test, test_array2);
	printf("deque is currently %s\n", (deque_empty(test) ? "empty" : "not empty"));
	printf("deque size is currently %d\n", deque_size(test));
	
	//Result should be abcde zyxwu every time
	printf("%s %s\n", (char*)test->begin->content, (char*)test->end->content);
	printf("%s %s\n", (char*)test->end->prev->content, (char*)test->begin->next->content);
	printf("%s %s\n", (char*)test->end->next->content, (char*)test->begin->prev->content);
	
	char	*bucket = deque_pop_back(test);

	printf("deque is currently %s\n", (deque_empty(test) ? "empty" : "not empty"));
	printf("deque size is currently %d\n", deque_size(test));
	printf("remaining in deque is %s %s printed twice\n", (char*)test->begin->content, (char*)test->end->content);
	printf("extracted %s\n", bucket);
}

int	main(void)
{
	printf("***************************************\n");
	printf("            Libfd Unit Test            \n");
	printf("***************************************\n\n");
	deque_test();




	return (0);
}