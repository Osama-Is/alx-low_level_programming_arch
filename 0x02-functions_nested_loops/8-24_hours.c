#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	short hrstn = 48;
	short hrson = 48;
	short mnstn = 48;
	short mnson = 48;

	while (hrstn < 51)
	{
		while (hrson <= 57)
		{
			while (mnstn < 54)
			{
				while (mnson <= 57)
				{
					_putchar(hrstn);
					_putchar(hrson);
					_putchar(':');
					_putchar(mnstn);
					_putchar(mnson);
					_putchar('\n');
					if (hrsrn == 50 &&\
						hrson == 51 &&\
						mnstn == 53 &&\
						mnson == 57)
					{
					    y2 = 100;
					    y1 = 100;
					    x2 = 100;
					    x2 = 100;
					}
					y2++;
				}
				y2 = 48;
				y1++;
			}
			y1 = 48;
			x2++;
		}
		x2 = 48;
		x1++;
	}
}
