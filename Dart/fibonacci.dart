import 'dart:io';

void main() {
  stdout.write("Enter no. of digits of fibonacci series: ");
  int? n = int.parse(stdin.readLineSync()!);
  fibonacci(n);
}

void fibonacci(int n) {
  int f = 0, s = 1;
  stdout.write('$f $s ');
  for (int i = 0; i < n; i++) {
    int t = f + s;
    stdout.write('$t ');
    f = s;
    s = t;
  }
}
