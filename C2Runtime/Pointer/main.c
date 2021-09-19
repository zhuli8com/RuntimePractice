//
//  main.c
//  Pointer
//
//  Created by 朱利 on 2021/9/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 普通指针
    int a = 4;
    int *pa = &a;//指针赋值
    printf("%d\n",a);
    printf("%p\n",&a);
    printf("%p\n",pa);
    printf("%d\n",*pa);//指针取值
    
    int **ppa = &pa;
    printf("%p\n",&ppa);
    
    char b[] = "hello";
    char *pb = b;
    printf("%p\n",b);
    printf("%p\n",pb);
    for (int i = 0; i < 5; i++) {
        printf("&b[%d]=%p\n",i,&b[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("&b[%d]=%c\n",i,b[i]);
    }10-5puq
    aaaaaaaaaa[q]
    for (int i = 0; i < 5; i++) {
        printf("&b[%d]=%c\n",i,*(b+i));
    }
    return 0;
}
