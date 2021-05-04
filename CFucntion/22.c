void char_cesar(char * ch, int shift)
{
    if (*ch + shift > 122)
        *ch = *ch+shift - 26;
    else if (*ch + shift <= 122)
        *ch = *ch + shift;
}