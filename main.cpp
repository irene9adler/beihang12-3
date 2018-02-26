//北航12年第三题
/*统计关键字出现位置
输入：
一行标准c语言代码（字符个数小于300），统计出该字符串中关键字的if，while，for所在的位置，按照关键字出现的顺序依次输出。注意双引号
内的不需要统计。
输入：一行标准c语言代码，字符个数小于300
输出：
关键字if，while，for对应的位置，按照关键字出现的顺序依次输出。输出格式为：关键字，后跟冒号，然后是出现的位置。扫描到关键字就输出
，每个输出占一行。
样例输入：
#include <stdio.h> int main() {int i = 0; if(i == 0) printf("YES"); return 0;}
#include <stdio.h> int main() {int ifwhile = 0; int forif = 1;char if_for_while = 'a';char *str = "while"; while(ifwhile == 0)
{ifwhile = 1;forif = 0;} if(forif == 0) {if_for_while = 'b';} if(ifwhile == 1) {if_for_while = 'c';} return 0;}
样例输出：
if:43
while:88
if:133
if:170
*/
#include <stdio.h>
#define M 300

int main()
{
    char arr [M];
    int i;
    while(scanf("%s",arr)!=EOF)
    {
        for(i=0;i<M;i++)
        {
            if(arr[i]=='i')//不在引号内
               {
                   if(arr[i+1]=='f')
                    printf("if:%d\n",i);
               }

             if(arr[i]=='w')
               {
                   if((arr[i+1]=='h')&&(arr[i+2]=='i')&&(arr[i+3]=='l')&&(arr[i+4]=='e'))
                    printf("while:%d\n",i);
               }

             if(arr[i]=='f')
               {
                   if((arr[i+1]=='o')&&(arr[i+2]=='r'))
                    printf("for:%d\n",i);
               }
        }
    }
    return 0;
}
