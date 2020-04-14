    #include <stdio.h>
     
    struct mystruct {
	int enabled:16;
    };
     
    int main()
    {
	clrscr();
	{
	struct mystruct s;
	s.enabled = 1;
	if (s.enabled == 1)
		{
		printf("Is enabled\n");
		}
	 else {
		printf("Is disabled\n");
		}
	 getch();
    }
    }