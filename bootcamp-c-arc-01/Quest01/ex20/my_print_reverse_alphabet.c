void my_putchar(char c) {
  write(1, &c, 1);
}

void my_print_reverse_alphabet()
{
    char letter = 'z';
    while (letter >= 'a') {
      my_putchar(letter);
      letter--;
    }
    my_putchar('\n');
}