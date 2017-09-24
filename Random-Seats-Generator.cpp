#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <ctime>
const int STU=42; 
char name[STU][9];
int flag[STU];
int main()
{
    freopen("namelist.txt","rt",stdin);
    freopen("seats.txt","wt",stdout);
    for(int i=0;i<STU;i++)
        scanf("%s",&name[i]);
    srand(time(0));
    memset(flag,0,sizeof(flag));
    puts("<--后　门-->");
    for(int i=0;i<STU;)
    {
        int j=rand()%STU;
        if(flag[j]) continue;
        flag[j]=1;
        printf("%s",name[j]);
        for(j=strlen(name[j])/2;j<6;j++)
            printf("　");
        if(!((i-1)%8)) puts("");
        i++;
    }
    puts("<--前　门-->");
    fclose(stdin);
    fclose(stdout);
    return 0;
}
 
