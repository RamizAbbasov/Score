#include "stdio.h"
int main(){
  int girilecekQiymet;
  printf("Please enter your score:");
  scanf("%d",&girilecekQiymet);
if (girilecekQiymet<=100 && girilecekQiymet>=91) {
  printf("\nYour Score is: A\n");
}
  else if (girilecekQiymet<=90 && girilecekQiymet>=81) {
    printf("\nYour score is: B\n");
  }
  else if (girilecekQiymet<=80 && girilecekQiymet>=71) {
    printf("\nYour score is: C\n");
  }
  else if (girilecekQiymet<=70 && girilecekQiymet>=61) {
    printf("\nYour score is: D\n");
  }
  else if (girilecekQiymet<=60 && girilecekQiymet>=51) {
    printf("\nYour score is: E\n");
  }
  else if (girilecekQiymet<50) {
    printf("\nYou cannot pass the exam\n");
  }
else if (girilecekQiymet>100 && girilecekQiymet<0) {
  printf("\nPlease check you credentials and enter again\n");
}
else {
  printf("Something went wrong please try again");
}
return 0;
}
