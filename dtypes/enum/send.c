#include<stdio.h>
int main()
{
enum petrolpumps {ZLINE=0, MPD, QPD};
enum parityTypes {noparity = 0, odd, even};
enum petrolpumps using[3] = {ZLINE,MPD,QPD};
enum parityTypes parity[3] = {noparity,odd,even};

int packet = 0;
for( int i  = 0; i <= 2; i++){
for(int j  = 0; j <= 2 ; j++){
      packet = using[i] << 8;
      packet = packet | parity[j];
      fprintf(stderr,"In send program- Sending the packet\n");
      fprintf(stdout,"%d\n",packet);
    
   }
}
return 1;
}
