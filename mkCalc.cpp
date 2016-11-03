long double mkCalc (long double x, char z, long double y)
{
    long double result;
    if (z=='+')
    {
    result=x+y;
    }
    if (z=='-')
    {
    result=x-y;
    }
    if (z=='*')
    {
    result=x*y;
    }
    if (z=='/')
    {
    result=x/y;
    }
    return result;
}
