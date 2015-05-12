#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "error.h"

/* Error message buffer length */
#define LSL_ERR_LEN 256

void lsl_error(const char * progname, const char * msg, const int fatal){

   char message[LSL_ERR_LEN] = {0};

   snprintf(message, LSL_ERR_LEN, "%s: %s", progname, msg );   
   perror(message);
   
   if(fatal){
      fprintf(stderr, "Aborting\n");
      exit(LSL_ERROR);
   }

}
