#include <stdio.h>
#include <stdlib.h>

char *copied_text=NULL;
char cccc[2048];
char ccccc[2048];

void memcpy(char *into,char *from,int length){
  int n=0;
  for(n=0;n<length;n++)into[n]=from[n];

}
void copy_text(char *text_pointer, int length) {
  char *text = (char) ccccc;
  memcpy(text, &text_pointer, length);
  text[length] = '\0';
  copied_text = text;
}

char *get_copied_text() {
  return copied_text;
}

int *allocate_text(int length) {
  return (int) cccc;
}
