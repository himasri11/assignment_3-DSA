#include <stdio.h>
#include <string.h>
char stack[100]; int top=-1;

void push(char c){ stack[++top]=c; }
char pop(){ return stack[top--]; }

int main() {
    char str[100]; fgets(str,100,stdin);
    int n=strlen(str); if(str[n-1]=='\n') str[--n]=0;
    for(int i=0; i<n; i++) push(str[i]);
    for(int i=0; i<n; i++) str[i]=pop();
    printf("%s\n",str);
    return 0;
}
