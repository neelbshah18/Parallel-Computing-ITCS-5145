//prelim.c
#include <unistd.h>
#include <stdio.h>
int main () {
	
  char hostname[1024]; 
  hostname[1023] = '\0';
  gethostname(hostname,1023); 
  printf("Hostname: %s\n", hostname);
  return 0;
}
