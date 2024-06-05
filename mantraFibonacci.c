#include <stdio.h>

struct stack {
    int data[100];
    int count;
};

struct stack tumpukan1;

void inisialisasi(struct stack *s) {
    s->count = 0;
}

void push(int data, struct stack *s) {
    if(s->count == 99) {
        printf("stack penuh");
    } else {
        s->data[s->count] = data;
        (s->count)++;
    }
}


void pop(struct stack *s) {
    if (s->count == 0) {
        printf("stack kosong");
    } else {
        (s->count)--;
    }
}

void cetak(struct stack *s) {
    for(int i = 0; i <= (s->count); i++){
        printf("%d", s->data[i]);
    }
}

// gatau deret fibonacci

int main () {
    push(9, &tumpukan1);
    pop(&tumpukan1);
    cetak(&tumpukan1);
    pop(&tumpukan1);
}
    
