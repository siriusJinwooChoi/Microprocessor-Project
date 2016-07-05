#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void numberOfInterrupt();
int main()
{
  numberOfInterrupt();
  return 0;
}

void numberOfInterrupt() {
  unsigned int index, addr = 0xE000E400;
  char *pInterrupt = (char *)0xE000E400;
  int value1, count = 0; 
  int i, value2 = 0;
  char priority[30], interrupt[30];
  char nu[5], nu2[5];
  char temp;
  
  *(unsigned int*) 0xE000E400 = 0xff;
  temp = (char)*pInterrupt;
  value1 = (int)temp;
  for(i=0; i<8; i++) {
    value2 = value1 >> i;
    value2 &= 0x1;
    if(value2)
      count++;
  }
  
  if(count !=0) {
    value2 = 1;
    value2 = value2 << count;
  }
  else
    value2 = 0;
  
  strcpy(priority, "Priority:");
  sprintf(nu, "%d", value2);
  strcat(priority, nu);
  
  count = 0;
  for(i =0; i<240; i++) {
    pInterrupt = (char *) addr;
    *(unsigned int *)addr = 0xff;
    temp = (char)*pInterrupt;
    value1 = (int)temp;
    addr++;
    if(value1)
      count++;
  }
  strcpy(interrupt, "Interrupt:");
}