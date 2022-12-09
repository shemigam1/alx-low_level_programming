#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	   int a = 0;

	      int b = 1;

	         int c = 2;

		    

		    while (a <= 7)

			       {

				             putchar(a + '0');

					           putchar(b + '0');

						         putchar(c + '0');

							       putchar(',');

							             putchar(' ');

								           

								           c++;

									         

									         if (c > 7){

											          b++;

												           c = b + 1;

													         }

										       if (b > 6){

											                a++;

													         b = a + 1;

														          c = b + 1;

															        }

										          }

		       

		       putchar('\n');
		       return 0;
}
