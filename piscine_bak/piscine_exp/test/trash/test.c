#include <stdio.h>
#include <string.h>

int        ft_strcmp(char *str, char *to_find);

int        main(void)
{
	   int i = 0;
	      char *inputs_a[] = {
			         "hello",
					        "hello",
							       "bebop",
								          "sastantua",
										         "broken\0string",
												        "",
														       "",
															          "test",
																	         "\200"
																				    };
		     char *inputs_b[] = {
				        "world",
						       " hello",
							          "kilimanjaro",
									         "salmonella",
											        "test",
													       "test",
														          "",
																         "    ",
																		        "\0"
																					   };

			    printf("TESTS:\n");
				   printf("---------------------------------------------------------\n");
				      printf("%-12s   -   %-12s   -   %-12s\n", "A", "B", "RETURN");
					     printf("---------------------------------------------------------\n");
						    while (i < 9)
								   {
									          char *a = inputs_a[i], *b = inputs_b[i];
											         char *test = strcmp(a, b) == ft_strcmp(a, b) ? "\x1B[32mPASS" : "\x1B[31mFAIL";
													        printf("%-12s   -   %-12s   - %5d - %5d - %s\x1B[0m\n",
																	               a, b, strcmp(a, b), ft_strcmp(a, b), test);

															       i++;
																      }
							   return (0);
}
