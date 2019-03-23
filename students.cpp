#include <stdio.h>
#include <string.h>

int main() {
    // 这里声明i没用，因为for循环用到的i最好在for循环里面声明，不要在外面声明for循环用的变量。
    int n;
    struct Student{
        int number;
        char name[20];
        char sex[2];
        int age;
        char address[20];
        int mark;
    };
    printf("enter the number of students:\n");
    scanf("%d", &n);
    Student student[n];
    for(int i = 0; i < n; i++) {
        printf("%d\n", i);
        // 输入字符串应用%s，输入示例: 1 xiaokui f 10 beijing 20
        scanf("%d %s %s %d %s %d", &student[i].number, student[i].name, student[i].sex, &student[i].age,
              student[i].address, &student[i].mark);
    }
    printf("%d, %s\n", student[0].number, student[0].name);
    printf("%d, %s\n", student[1].number, student[1].name);
    int number;
    
    printf("input number\n");
    while(scanf("%d", &number)) {
        // 如果用户输入1000，那么循环结束
        if(number == 1000) {
            break;
        }
        for(int i = 0; i < n; i++) {
            if(number == student[i].number) {
                printf("%d\n", student[i].number );
            }
        }
    }
    char name[20];
    printf("input name\n");
    while(scanf("%s", name)) {
        // 如果用户输入quit，那么循环结束
        if(strcmp(name, "quit") == 0) {
            break;
        }
        // 字符串比较应用strcmp()
        for(int i = 0; i < n; i++) {
            if(strcmp(name, student[i].name) == 0) {
                printf("%s\n", student[i].name );
            }
        }
    }
}
