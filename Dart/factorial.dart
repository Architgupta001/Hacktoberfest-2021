import 'dart:io';

void main() {
  stdout.write("Enter number: ");
  int? n = int.parse(stdin.readLineSync()!);
  stdout.write("Factorial of $n = ${factorial(n)}");
}

int factorial(int n) {
  int f = 1;
  while (n > 0) {
    f *= n--;
  }
  return f;
}
