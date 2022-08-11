int main(void)
{
  register char* arg2 asm("rsi") = "Hello, Holberton\n";
  asm("mov $1, %rax; mov $1, %rdi; mov $14, %rdx; syscall;");
  return 0;
}
