void print_char(char c);
void print_number(int value);
void my_print_n_ascii(int howMany);

int main(void) {
    my_print_n_ascii(5);
    return 0;
}
void my_print_n_ascii(int howMany)
{
    for(int a=33; a<38; a=a+1){
    char c=a;
    print_char(c);
    }
}
