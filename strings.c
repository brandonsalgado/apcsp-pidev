#include <stdio.h>
#include <string.h>


int main() {
char c = 'a';
char str1[27];
  for (int i = 0; i < 27; i++)
 {
 str1[i] = c;
    c++;
}
  str1[26] = '\o';

  char str2[] =
"abcdefghijklmnopqrstuvwxyz";

  if(strcmp(str1,str2) == 0)
{

    printf("The alphabets are identical.\n");

}
  for (int i = 0; i < 26; i++)
  {
str2[i] = str2[i] - 32;
}
  char str3[54] = "";
  strcat(str3,str1);
  strcat(str3, str2);
  printf("%s %s %s ",str1, str2, str3);
}

