//C program to find multiples of 2 and 3 in the range of 1 to 9

#include <stdio.h>
#define MAX 5

int main()
	{
	int i,j = 0,num[MAX];
	printf("Enter %d numbers in the range of 1 to 9 \n", MAX);
	for(i = 0; i<MAX; )
		{
		scanf("%d",&num[i]);
		switch (num[i])
			{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9: i++;
			break;
			default:
			    {
                 j = 1;
                 break;
			    }


			}
		if(j == 1)
        {
            printf("NO MORE INPUT");
            break;
        }


		}
		printf("\nMultiple of 3's \n");
		printMultiple(num, i);
		printf("\nMultiple of 2's\n");
		printEven(num, i);
	}

	printMultiple(int num[MAX], int len)
	{

		int i,j,k;
		for(i = 0; i<len; i++)
			{
            int ans3 = num[i]%3;
            switch (ans3)
			{
            case 0:
                printf("%d \n", num[i]);
			}
			}
	}

	printEven(int num[MAX], int len)
	{

		int i,j,k;
		for(i = 0; i<len; i++)
			{
            int ans_even = num[i]%2;
            switch (ans_even)
			{
            case 0:
                printf("%d \n", num[i]);
			}
			}
	}
