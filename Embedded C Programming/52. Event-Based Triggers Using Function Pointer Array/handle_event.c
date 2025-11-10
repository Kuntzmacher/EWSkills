#include <stdio.h>

void on_button() { printf("Button Pressed"); }
void on_timer() { printf("Timer Expired"); }
void on_uart() { printf("UART Received"); }
void on_power() { printf("Power On"); }
void on_error() { printf("Error Detected"); }

// Write your event dispatcher logic here
void handle_event(int event_code) {
  // Your logic
  if ((event_code < 0) || (event_code > 4)) {
    printf("Unhandled Event\n");
  }

  void (*arr[5])() = {on_button, on_timer, on_uart, on_power, on_error};
  arr[event_code]();
}

int main() {
  int event;
  scanf("%d", &event);
  handle_event(event);
  return 0;
}
