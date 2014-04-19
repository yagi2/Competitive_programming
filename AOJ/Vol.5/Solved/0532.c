#include<stdio.h>

int main(void){
  unsigned long int ihf,imf, isf, ihs, ims, iss;
  unsigned long int save, oh, om, os;
  int i;
	
  for(i=0;i<3;i++){
    scanf("%lu %lu %lu %lu %lu %lu", &ihf, &imf, &isf, &ihs, &ims, &iss);
			
    ihs = ihs*3600;
    ims = ims*60;
    iss = iss+ihs+ims;
		
    ihf = ihf*3600;
    imf = imf*60;
    isf = isf+ihf+imf;
		
    save = iss-isf;
		
    oh = save/3600;
    save = save%3600;
		
    om = save/60;
    save = save%60;
		
    os = save;
		
    printf("%lu %lu %lu\n",oh, om, os);
  }
	
  return 0;
}
