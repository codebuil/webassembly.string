#include <stdio.h>
#include <stdlib.h>

char *copied_text=NULL;
char cccc[1024];
char ccccc[1024];

void memcpys(char *into,char *froms,int length){
  int n=0;
  for(n=0;n<length;n++)into[n]=froms[n];

}
void copy_text(char *text_pointer, int length) {
  char *text = ccccc;
  memcpys(text, text_pointer, length);
  text[length] = '\0';
  copied_text = text;
}

char *get_copied_text() {
  return copied_text;
}

int *allocate_text(int length) {
  return (int *) cccc;
}
