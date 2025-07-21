#include<stdio.h>
#include<stdlib.h>
int main() {
    int *p= (int*)malloc(10 * sizeof(int));

    for(int i = 0; i < 10; i++) {
        printf("Enter value for element %d: ", i);
        scanf("%d", &p[i]);
    }
    for(int i = 0; i < 10; i++) {
        printf("%d ", p[i]);
    }
    free(p);
    return 0;
}
// for(i=0;i<100;i++){
//     p[i]=50-i;
// }
 //for(i=0;i<100;i++){
//     printf("%d ",(*p+i));
// }