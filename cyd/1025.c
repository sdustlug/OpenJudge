 #include  <stdio.h>
int main()
{  int n,a;
   while (scanf("%d",&n)!=EOF)
   if(n<0||n>100)
    {printf("Error\n");}
   else if(n>=0&&n<=100)
  {
      switch (n/10)
   {
    case 9:
     printf("Excellent\n"); break;
    case 8:
     printf("Good\n"); break;
    case 7:
     printf("Average\n"); break;
    case 6:
     printf("Pass\n"); break;
    default:
        if(n==100)
        printf("Excellent\n");
    else
        printf("Failing\n");

   }
  }
   return 0;
}














/**************************************************************
	Problem: 1025
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

