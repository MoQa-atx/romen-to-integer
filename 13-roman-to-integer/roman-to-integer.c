int romanToInt(char *s) {
     char romen[] = {'I','V','X','L','C','D','M'};
    int numbs[]  = {1,5,10,50,100,500,1000};
    int toplam = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        char mevcut = s[i];
        char sonraki = s[i+1];
        int s1 = 0;
        int s2 = 0;

        for (int j = 0; j < 7; j++) {
            if (mevcut == romen[j]) {
                s1 = numbs[j];
                break;
            }
        }
        for (int j = 0; j < 7; j++) {
            if (sonraki == romen[j]) {
                s2 = numbs[j];
                break;
            }
        }

        if (s1 >= s2)
            toplam += s1;
        else
            toplam -= s1;
    }

    return toplam;
}
