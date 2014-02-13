#include <hidef.h>      /* common defines and macros */
#include "derivative.h"      /* derivative-specific definitions */



void main(void) {
  /* put your own code here */
  

  //function declarations
	void InitSCI(void);
	void InitPorts(void);


  for(;;) {
    _FEED_COP(); /* feeds the dog */
  } /* loop forever */
  /* please make sure that you never leave main */
}
