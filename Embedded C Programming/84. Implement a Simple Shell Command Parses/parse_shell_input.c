#include <ctype.h>
#include <stdio.h>

void parse_shell_input(char *line) {
  // Your logic here
  char word[100];
  int i = 0, j = 0;

  while (line[i] != '\0') {
    if (line[i] != ' ') {
      word[j] = line[i];
      j++;
    } else {
      if (j != 0) {
        word[j] = '\0';
        printf("%s\n", word);
        j = 0;
      }
    }
    i++;
  }
  word[j] = '\0';
  printf("%s\n", word);
}

int main() {
  char line[101];
  fgets(line, sizeof(line), stdin);

  parse_shell_input(line);
  return 0;
}
