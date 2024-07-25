int squareRoot(int x){
    int i = 1;
    // example 36 = 6 * 6
    while(i * i <= x){
        i++;
    }
    // i = 7, return 6
    return i-1;
}