int main() {
  // error: operand of increment operator not a modifiable lvalue
  4--;

  int array[5];
  // error: operand of increment operator not a modifiable lvalue
  array--;
}