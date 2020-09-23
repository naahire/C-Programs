//Swaping of Two number Without Using Third Variable
#include <stdio.h>
int main()
{
	int a=3,b=5;
	(a^=b),(b^=a),(a^=b);
printf("After swapping program is a=%d and b=%d",a,b);	
}