#include <stdio.h>
#include <stdlib.h>
int main()
{

    int array[]={0, 1, 3, 6, 9, 14, 18, 22, 23, 24, 25, 28, 30, 33, 38, 44, 50};
    int low=0,high=sizeof(array)/sizeof(array[0]);	/*high��ʼֵΪ���鳤��*/
    int mid=0;
    int target=25;

    while(low<=high)
    {
		mid=(low+high)/2;
		if(array[mid]<target)
			low=mid+1;
		else if(array[mid]>target)
			high=mid-1;
		else
			break;
	}
	if(low>high)
		printf("û�ҵ�25");
	else
		printf("�ҵ��ˣ��±���%d", mid);

    return 0;
}
