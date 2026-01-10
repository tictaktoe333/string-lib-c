int str_len(const char* str) {
    const char* s = str;
    int length = 0;
    while (*s != '\0') {
        s++;
        length++;

    }
    return length;
}