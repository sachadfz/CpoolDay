void print_char(char c);
void print_number(int value);
void my_print_n_ascii(int howMany);

void my_print_n_ascii (int howMany)
{
    for (int a=33; a<howMany+33; a=a+1 ) {
    char c=a;
    print_char(c);
    }
}