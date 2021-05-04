void char_register(char * ch, int fl)
{
    if (fl == 1)
    {
        if ('a' <= *ch && *ch <= 'z')
            *ch += ('A' - 'a');
    }
    if (fl == 0)
    {
        if (*ch >= 'A' && *ch <= 'Z')
            *ch += ('a' - 'A');
    }
}
