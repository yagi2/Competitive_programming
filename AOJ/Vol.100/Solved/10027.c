#include<stdio.h>
#include<string.h>

int main(void){
  char ctaro[256],chana[256];
  int n,taro=0,hana=0;
  int i,len,lent,lenh;
	
  memset(ctaro,'\0',sizeof(ctaro));
  memset(chana,'\0',sizeof(chana));
	
  for(scanf("%d",&n);n!=0;n--){
    scanf("%s %s",ctaro,chana);
		
    lent = strlen(ctaro);
    lenh = strlen(chana);
		
    if(lent>lenh){
      len = lent;
    }else if(lent<lenh){
      len = lenh;
    }else if(lent==lenh){
      len = lent;
    }
		
    for(i=0;i<lent;i++){
      if(ctaro[i]>=65 && ctaro[i]<=90){
	ctaro[i] -= 32;
      }
    }
		
    for(i=0;i<lenh;i++){
      if(chana[i]>=65 && chana[i]<=90){
	chana[i] -= 32;
      }
    }
		
    if(lent==lenh){
      for(i=0;i<len;i++){
	if(i==len-1){
	  if(ctaro[i]>chana[i]){
	    taro += 3;
	    break;
	  }else if(ctaro[i]<chana[i]){
	    hana += 3;
	    break;
	  }else if(ctaro[i]==chana[i]){
	    hana++;
	    taro++;
	  }
	}else{
	  if(ctaro[i]>chana[i]){
	    taro += 3;
	    break;
	  }else if(ctaro[i]<chana[i]){
	    hana += 3;
	    break;
	  }
	}
      }
    }else{
      for(i=0;i<len;i++){
	if(ctaro[i]>chana[i]){
	  taro += 3;
	  break;
	}else if(ctaro[i]<chana[i]){
	  hana += 3;
	  break;
	}
      }
    }
		
    memset(ctaro,'\0',sizeof(ctaro));
    memset(chana,'\0',sizeof(chana));
  }
	
  printf("%d %d\n",taro,hana);
	
  return 0;
	
}
