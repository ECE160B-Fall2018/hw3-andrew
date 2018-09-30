#include <stdio.h>
#include <string.h>
void squeeze (char s1array[], char s2array[]);

void main()
{
	char eg1[] = "this is a k";
	char eg2[] = "this is eeeeee";
	char eg3[] = "interesting";
	char eg4[] = "just kidding";
	char eg5[] = "that's not fun";
	char eg6[] = "i know";

	squeeze(eg1, eg2);
	printf("\n");
	squeeze(eg3, eg4);
	printf("\n");
	squeeze(eg5, eg6);
	printf("\n");

	return;
}
	
void squeeze (char s1array[], char s2array[])
{
	for (int i=0; i<strlen(s1array); i++)
	{
		int n=1;
		for (int j=0; j<strlen(s2array);j++)
		{
			
			if (s1array[i]==s2array[j])
			{
	 			n=0;
				break;
			}


		}
		if(n==1)
		{
			putchar(s1array[i]);
		}		
	}
	return;	
}
