#include<cstdio>
#include<cstdlib>
#include<cstring>
int n;
const int maxn=200005;
char s[maxn];
int l;
char ans[maxn*2];
int tot;
int sum(int s)
{
	int re=0;
	while(s)
	{
		re+=s%10;
		s/=10;
	}
	return re;
}
bool check(int s)
{
	return sum(sum(s))<10;
}
int tmp[25],t;
void printall(int x)
{
	t=0;
	while(x)
	{
		tmp[t++]=x%10;
		x/=10;
	}
	printf("%d",tmp[t-1]);
	for (int i=t-2;i>=0;--i) printf("+%d",tmp[i]);
	puts("");
}
int main()
{
	srand(233333);
	scanf("%d",&n);
	scanf("%s",s);
	l = strlen(s);
	while(1)
	{
		int s2=0;
		tot = 0;
		ans[0]=s[0];
		s2=s[0]-'0';
		++tot;
		for (int i=tot;i<l;)
		{
			ans[tot++]='+';
			if (i==l-1 || rand()%2)
			{
				ans[tot++] = s[i];
				s2+=s[i]-'0';
				++i;
			}
			else
			{
				ans[tot++] = s[i];
				ans[tot++] = s[i+1];
				s2+=(s[i]-'0')*10;
				s2+=s[i+1]-'0';
				i+=2;
			}
		}
		if (check(s2)) 
		{
			ans[tot]=0;
			printf("%s\n", ans);
			printall(s2);
			printall(sum(s2));
			break;
		}
	}
	return 0;
}
