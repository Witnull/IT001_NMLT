if (kt == false)
        cout << "Khong noi duoc. Khong du bo nho.";
}
auto re(char *s) {
    int i = 0, j = 0;
    while (s[i] != '\0') {
        if (s[i] != '\r' && s[i] != '\n')
            s[j++] = s[i];
        i++;
    }
    s[j] = '\0';
    return s;
}

bool myStrcat(char s1[], char s2[]) {
    s1 = re(s1); s2 = re(s2); 
    int i =0, j = 0, flaws1 = 0, flaws2 = 0;
    
    for(i = 0; s1[i] != '\0'; i++);
    
    if (i > MAX -1) return false;
    
    for(j = 0; s2[j] != '\0'; j++,i++){
        s1[i] = s2[j];
        if (i > MAX -1) return false;
    }
    s1[i]='\0';
    
    cout << s1;
    return true;
}