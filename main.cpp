//����12�������
/*ͳ�ƹؼ��ֳ���λ��
���룺
һ�б�׼c���Դ��루�ַ�����С��300����ͳ�Ƴ����ַ����йؼ��ֵ�if��while��for���ڵ�λ�ã����չؼ��ֳ��ֵ�˳�����������ע��˫����
�ڵĲ���Ҫͳ�ơ�
���룺һ�б�׼c���Դ��룬�ַ�����С��300
�����
�ؼ���if��while��for��Ӧ��λ�ã����չؼ��ֳ��ֵ�˳����������������ʽΪ���ؼ��֣����ð�ţ�Ȼ���ǳ��ֵ�λ�á�ɨ�赽�ؼ��־����
��ÿ�����ռһ�С�
�������룺
#include <stdio.h> int main() {int i = 0; if(i == 0) printf("YES"); return 0;}
#include <stdio.h> int main() {int ifwhile = 0; int forif = 1;char if_for_while = 'a';char *str = "while"; while(ifwhile == 0)
{ifwhile = 1;forif = 0;} if(forif == 0) {if_for_while = 'b';} if(ifwhile == 1) {if_for_while = 'c';} return 0;}
���������
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
            if(arr[i]=='i')//����������
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
