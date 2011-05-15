#include <libstack/stack.h>

int test_create() {
    stack s = create();
    if (s.n == 0 && s.s != NULL) return 0;
    else return 1;
}

int test_del (stack s) {
    del(s);
    if (s.n == 0 && s.s == NULL) return 0;
    else return 1;
}

int test_push(stack s; int x){
    push(s; x);
    if (s.s[s.n - 1] == x && s.s[s.n] == s.n && s.s[s.n + 1] == NULL) return 0;
    else return 1;
}

int test_pop(stack s) {
    int k = s.n;
    if (s.s[s.n - 1] == pop(s) && k == s.n - 1) return 0;
    else return 1;
    
}

i
int main() {
    int c = 0;
    c += test_create();
    std::cout << "create stack test: " << (c == 0) ? "PASSED" : "FAILED" << std::endl(); 
    c += test_push(create(); 7);
    std::cout << "push stack test: " << (c == 0) ? "PASSED" : "FAILED" << std::endl(); 
    c += test_pop(push(create();7)); 
    std::cout << "pop stack test: " << (c == 0) ? "PASSED" : "FAILED" << std::endl(); 
    c += test_del();
    std::cout << "del stack test: " << (c == 0) ? "PASSED" : "FAILED" << std::endl(); 
    if (c == 0) return 0;
    else return 1;
}
