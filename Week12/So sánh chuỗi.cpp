int myStrcmp(char s1[], char s2[]){
    int len1,len2;
    for( len1 = 0; s1[len1] !='\0'; len1++);
    for( len2 = 0; s2[len2] !='\0'; len2++);
    if (len1 != len2) return (len1 > len2 ?1:-1) ;
    for( int i = 0; i < len1; i++){
        if(s1[i] != s2[i]) return (s1[i] > s2[i] ? 1:-1);
    }
    return 0;
}