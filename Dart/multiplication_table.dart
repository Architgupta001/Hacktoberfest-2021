import 'dart:io';

void main() {
  stdout.write("Enter number: ");
  int? n = int.parse(stdin.readLineSync()!);
  for (int i = 0; i <= 10; i++) {
    print("$n*$i= ${n * i}");
    sleep(Duration(milliseconds: 1200));
  }
  print("Thank you!");
}
