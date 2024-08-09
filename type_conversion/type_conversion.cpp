// type conversion occur automatically when we use an object of one typr wher an object of aonother tpe is expected
/*
example
    bool b-35; output is going to be true 
        if we assign one of the non -bool arithmetic type to a bool object the result id false if the value is 0 and true otherwisew
    int i=b;
        the output is 1
        ifwe assign a bool to one of the other arithmetic type the resulting value is 1 if the bool is true and 0 if false
    i=3.14;
        the output is 3
        value after decimal point will be
    double pi=i;
        output is 3.0
    unsigned char c=-1;
        assuming 8-bit chars, c has the value 255
        -1 equivalent to 8 bit format:00000001
        1's complement: 11111110
        2's complement: 11111110
                              +1
                        ----------
                        11111111--->255
                        255 is blank characer so the output is blank
      

*/
