struct str str1; // TODO
struct str str2; // TODO
struct str str3; // TODO

struct str {
    char* _str;
    int size;
}

int main() {
    print(str1._str, str1.size);
    int num = read(0, str1._str, 256);
    print(str2._str, str2.size);
    write(1,str2._str,num);
}

void print(char* _str, int size) {
    write(1, _str, size);
}

void proof() {
    print(str3._str,str3.size);
}