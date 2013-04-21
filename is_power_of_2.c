#include <stdio.h>

/*a power of 2 shall return 0
zero is technically not a power a 2
*/
unsigned int is_power_of_2(unsigned int v){
  if( v == 0) //zero is not a power of two  
    return 1;
  else
    return (v & (v-1));
}

int main(){
  unsigned int this = 2;
  printf("is %d a power of two? %s\n",this, (is_power_of_2(this))? "no": "yes");
  this = 5;
  printf("is %d a power of two? %s\n",this, (is_power_of_2(this))? "no": "yes");
  this = 0;
  printf("is %d a power of two? %s\n",this, (is_power_of_2(this))? "no": "yes");
  this = 64;
  printf("is %d a power of two? %s\n",this, (is_power_of_2(this))? "no": "yes");

}
