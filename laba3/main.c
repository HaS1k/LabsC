#include <stdio.h>
int main()
{
char s[80];
if(fgets(s,80,stdin))
    for(int i=0;s[i];i++)
    if(s[i]=='a')s[i]='A';
    else if (s[i]=='b')s[i]='B';
puts(s);
return 0;
}
