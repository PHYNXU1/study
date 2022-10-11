#include <stdio.h>
main()
{
	int a[10]={1, 0, 24, 30, 5, 9, 30, 25, 55, 49};
	int i, j;
	for(i=0; i<10; i++)
		if(a[i]==25)
			break;
	if(i>9)
		printf("没找到25");
	else
		printf("25的下标为%d", i);

	return 0;
}
