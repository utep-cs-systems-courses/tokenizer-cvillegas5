#include <stdlib.h>
#include <stdio.h>
#include "tokenizer.h"

int space_char(char c){
  return (c == ' ' || c == '\t')?1:0;
}

int non_space_char(char c){
  return ((c != '\0') && (space_char(c) != 1))?1:0;
}

char *token_start(char *str){}
