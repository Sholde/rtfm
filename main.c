//usr/bin/env gcc --version > /dev/null ; c_file=${0#\./} ; gcc -Os -s ${c_file} -o ${c_file%.c} ; rm ${c_file} ; exit 0
#include <stdio.h>

int main(int argc, char **argv)
{
  printf("Did you read the code ?\n");
  return 0;
}
