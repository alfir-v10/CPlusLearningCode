if(*p_a > *p_b)
    *p_a = *p_b;
if(*p_a < *p_b)
    *p_b = *p_a;
if(*p_b > *p_c)
    *p_b = *p_c;
if(*p_b < *p_c)
    *p_c = *p_b;
if(*p_c > *p_a)
    *p_c = *p_a;
if(*p_c < *p_a)
    *p_a = *p_c;