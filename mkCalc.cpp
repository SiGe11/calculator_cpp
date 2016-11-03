long double mkCalc (long double x, char z, long double y)
{
    long double result;
    //TODO Handle non valid characters.
     switch(z)
    {
    case '+' :
        result=x+y;
        break;
    case '-' :
        result=x-y;
        break;
    case '*' :
        result=x*y;
        break;
    case '/' :
        result=x/y;
        break;
    }

    return result;
}
