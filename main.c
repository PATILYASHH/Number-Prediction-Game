#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int find();
int main()
{
  int secno;
  srand(time(0)); // for random number
  secno = rand() %  10+0;


  
  find(secno);



  return 0;
}

int find(secno)
{
  int getnum;
  int i=0;
  restart:
printf("\nGuess The Number Between 0 TO 10 : ");
  scanf("%d",&getnum);
  
  
    if(getnum == secno)
    {

      printf("______________________________\n");
      printf("\nYou Predicted Correct Number\n");
      printf("______________________________\n");


      printf("\n\n\n Number of Triels you taken : %d \n\n\n",i);
      return;
    }
    else
    {
      printf("______________________________\n");

      printf("\nTry Again\n");
      i++;
      printf("______________________________\n");

      goto restart;

    }
  
return;
}
