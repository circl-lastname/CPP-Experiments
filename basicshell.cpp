#include <iostream>
#include <cstring>

int main() {
  while (true) {
    std::cout << ">";
    char command[255];
    std::cin >> command;

    if (strcmp(command, "exit") == 0) {
      goto end;
    } else {
      system(command);
    }
  }

  end: return 0;
}
