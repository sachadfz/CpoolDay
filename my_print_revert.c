void print_char(char c);
void print_number(int value);
void my_print_revert(char *toRevert);

void my_print_revert(char *toRevert)
{
    print_char(toRevert[9]);
    print_char(toRevert[8]);
    print_char(toRevert[7]);
    print_char(toRevert[6]);
    print_char(toRevert[5]);
    print_char(toRevert[4]);
    print_char(toRevert[3]);
    print_char(toRevert[2]);
    print_char(toRevert[1]);
    print_char(toRevert[0]);
}
