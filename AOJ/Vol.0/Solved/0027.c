#include<stdio.h>

int main(void){
  int year=1, year_t=4, day, cen=6, month, month_t;
  int all, date;
	
  while(1){
    scanf("%d %d",&month, &day);
		
    if(month==0){
      break;
    }
    switch(month){
    case 1  : month_t = 1;
      break;
    case 2  : month_t = 4;
      break;
    case 3  : month_t = 4;
      break;
    case 4  : month_t = 0;
      break;
    case 5  : month_t = 2;
      break;
    case 6  : month_t = 5;
      break;
    case 7  : month_t = 0;
      break;
    case 8  : month_t = 3;
      break;
    case 9  : month_t = 6;
      break;
    case 10 : month_t = 1;
      break;
    case 11 : month_t = 4;
      break;
    case 12 : month_t = 6;
      break;
    }
    all = year+year_t+day+cen+month_t;
		
    date = all%7;
		
    if(month<=2){
      switch(date){
      case 1 : printf("Saturday\n");
	break;
      case 2 : printf("Sunday\n");
	break;
      case 3 : printf("Monday\n");
	break;
      case 4 : printf("Tuesday\n");
	break;
      case 5 : printf("Wednesday\n");
	break;
      case 6 : printf("Thursday\n");
	break;
      case 7 : printf("Friday\n");
	break;
      default: printf("Sunday\n");
	break;
      }
    }else{
      switch(date){
      case 1 : printf("Friday\n");
	break;
      case 2 : printf("Saturday\n");
	break;
      case 3 : printf("Sunday\n");
	break;
      case 4 : printf("Monday\n");
	break;
      case 5 : printf("Tuesday\n");
	break;
      case 6 : printf("Wednesday\n");
	break;
      case 7 : printf("Thursday\n");
	break;
      }
    }
		
    all = 0;
    date = 0;
		
  }
	
  return 0;

}
