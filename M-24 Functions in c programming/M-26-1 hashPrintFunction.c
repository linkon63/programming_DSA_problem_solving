#include <stdio.h>
void print_hash(int x){
    int i;
    for(i=1; i<=x; i++){
        printf("#");
    }
    printf("\n");
}
int main(){

int i;
for(i = 1; i<=5; i++)
    print_hash(i);
}
