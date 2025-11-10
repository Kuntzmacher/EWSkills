#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void parse_gprmc(char *nmea) {
  // Your logic here
  /* int i = 0;
  int field = 0;
  int before = 0, after = 0;
  bool isAfter = false;
  int hours = 0, minutes = 0, seconds = 0;

  while (nmea[i] != '\0') {
    if (nmea[i] == ',') {
      field++;
      i++;
      continue;
    }

    if (field == 0) {
    } else if (field == 1) {
      hours = ((nmea[i] - '0') * 10) + (nmea[i + 1] - '0');
      minutes = ((nmea[i + 2] - '0') * 10) + (nmea[i + 3] - '0');
      seconds = ((nmea[i + 4] - '0') * 10) + (nmea[i + 5] - '0');
      printf("Time: %.2d:%.2d:%.2d\n", hours, minutes, seconds);
      i += 5;
    } else if (field == 2) {
    } else if (field == 3) {
      if (nmea[i] == '.') {
        isAfter = true;
        i++;
        continue;
      }
      if (!isAfter) {
        before = before * 10 + (nmea[i] - '0');
      } else {
        after = after * 10 + (nmea[i] - '0');
      }
    } else if (field == 4) {
      printf("Latitude: %.4d.%.3d %c\n", before, after, nmea[i]);
      before = 0;
      after = 0;
      isAfter = false;
    } else if (field == 5) {
      if (nmea[i] == '.') {
        isAfter = true;
        i++;
        continue;
      }
      if (!isAfter) {
        before = before * 10 + (nmea[i] - '0');
      } else {
        after = after * 10 + (nmea[i] - '0');
      }
    } else if (field == 6) {
      printf("Longitude: %.5d.%.3d %c", before, after, nmea[i]);
    }

    i++;
  } */
  char *fields[7];
  int index = 0;

  char *token = strtok(nmea, ",");
  while (token != NULL && index < 7) {
    fields[index++] = token;
    token = strtok(NULL, ",");
  }

  char *t = fields[1];
  printf("Time: %.2s:%.2s:%.2s\n", t, t+2, t+4);

  printf("Latitude: %s %s\n", fields[3], fields[4]);

  printf("Longitude: %s %s", fields[5], fields[6]);

}

int main() {
  char nmea[100];
  fgets(nmea, sizeof(nmea), stdin);
  parse_gprmc(nmea);
  return 0;
}
