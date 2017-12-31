#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <list>

using namespace std;

const int STU=26; 
char name[STU][9];
int flag[STU];
list<int> RandList;

int getRand(void);

int main()
{
	cout<<"Please enter 1000 random numbers: \n";
	for(int i=1;i<=1000;i++)
	{
		int temp;
		cin>>temp;
		RandList.push_back(temp);
	}
	
    freopen("namelist.txt","rt",stdin);
    freopen("seats.txt","wt",stdout);
    for(int i=0;i<STU;i++)
        scanf("%s",&name[i]);
    memset(flag,0,sizeof(flag));
    puts("<--Back Door-->");
    
    for(int i=0;i<STU;)
    {
        int j=getRand()%STU; 
        if(flag[j]) continue;
        flag[j]=1;
        printf("%s",name[j]);
        for(j=strlen(name[j])/2;j<6;j++)
            printf(" ");
        if(!((i-1)%8)) puts(" ");
        i++;
    }
    puts("<--Front Door-->");
    fclose(stdin);
    fclose(stdout);
    return 0;
}

int getRand()
{
	int temp=RandList.back();
	RandList.pop_back();
	return temp;
}
