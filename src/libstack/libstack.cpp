
typedef struct {
	int *s;
	int n;
} stack;

stack create(){
	stack st;
    st.s = new int[10];
	st.n = 0;
	return st;
}

void del(stack st){
	delete[] st.s;
	st.n = 0;
}

void push(stack st, int x) {
	st.s[st.n++] = x;	
}

int pop(stack st) {
	int t = st.s[st.n - 1];
	st.s[st.n - 1] = 0;
	st.n--;
	return t;
}

