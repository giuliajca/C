#include <stdlib.h>
#include <string.h>
void inverte(char palavra[])
{
  int i;
  for (i = strlen(palavra) - 1; i >= 0; i--)
  {
    printf("%c", palavra[i]);
  }
}

int main(int argc, char const *argv[])
{
  char palavra[] = "minhasuperpalavra";
  inverte(palavra);
  return 0;
}
