void StringReverse(char st[]) { 
    int start = 0, end = 0, len = 0;
    for( len =0; st[len] != '\0'; len++);
    
    while (end <= len) { 
        if (st[end] == ' ' || st[end] == '\0')
        {
            int wlen = end - start; 
            
            for (int i = 0; i < wlen / 2; i++) 
            { 
                char temp = st[start + i];
                st[start + i] = st[start + wlen - i - 1]; 
                st[start + wlen - i - 1] = temp; 
            } 
            start = end + 1;
        }
        end++; 
    } 
    
}

int myStrcmp(char s1[], char s2[]){
    int len;
    for(len =0; s1[len] != s2[0]; len++);
    return len;
}