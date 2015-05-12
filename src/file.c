#include <stdio.h>
#include <string.h>
#include "file.h"
#include "error.h"
#include "common.h"

FILE * lsl_fopen(const char *path, const char *mode){

   FILE *fp;
   char error_msg[50 + LSL_FILE_PATH_LEN] = {0};

   if ((fp=fopen(path, mode))==NULL) {

      snprintf(error_msg, LSL_FILE_PATH_LEN + 50,
               "Error opening %s ",  path);
      lsl_error(error_msg, LSL_FALSE);

   }
   return fp;

}

