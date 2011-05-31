#include <iostream>

int stack_size = 10;

typedef struct {
	int *s;
    public:	int n;
} stack;

void create(stack &st){
    st.s = new int[stack_size];
	st.n = 0;
}

void del(stack &st){
	delete[] st.s;
    st.s = NULL;
	st.n = 0;
}

int push(stack &st, int x) {
    if (st.n >= stack_size) return 1;
    st.s[st.n] = x;
    st.n++;
    return 0;
}

int pop(stack &st, int &t) {
    if (st.n <= 0) return 1;
    t = st.s[st.n - 1];
    st.s[st.n - 1] = 0;
    st.n--;
    return 0;
}
