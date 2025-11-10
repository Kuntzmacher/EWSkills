#include <stdint.h>
#include <stdio.h>

void split_string(const char *str, char delimiter, char tokens[10][20],
                  uint8_t *count) {
  // Your logic here
  int i = 0, token_index = 0, word_index = 0;
  while (str[i] != '\0') {
    if (str[i] == delimiter) {
      tokens[token_index][word_index] = '\0';
      token_index++;
      word_index = 0;
    } else {
      tokens[token_index][word_index] = str[i];
      word_index++;
    }
    i++;
  }
  tokens[token_index][word_index] = '\0';
  *count = token_index + 1;
}

int main() {
  char str[101];
  char delimiter;
  fgets(str, sizeof(str), stdin);
  scanf(" %c", &delimiter);

  // Remove newline
  uint8_t i = 0;
  while (str[i]) {
    if (str[i] == '\n') {
      str[i] = '\0';
      break;
    }
    i++;
  }

  char tokens[10][20];
  uint8_t count = 0;

  split_string(str, delimiter, tokens, &count);

  for (uint8_t i = 0; i < count; i++) {
    printf("%s\n", tokens[i]);
  }

  return 0;
}
