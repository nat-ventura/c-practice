#include <stdio.h>

typedef struct {
  char * name;
  int age;
} person;

void birthday(person * p);

void birthday(person * p) {
  (*p).age += 1;
}

int main() {
  person nat;
  nat.name = "Natalie";
  nat.age = 22;

  printf("%s is %d years old.\n", nat.name, nat.age);
  birthday(&nat);
  printf("Happy birthday! %s is now %d years old.\n", nat.name, nat.age);

  return 0;
}
