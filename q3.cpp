#include <stdio.h>
char stack[100]; int top=-1;

void push(char c){ stack[++top]=c; }
char pop(){ return top==-1?0:stack[top--]; }

int isMatch(char a, char b) {
    return (a=='('&&b==')')||(a=='{'&&b=='}')||(a=='['&&b==']');
}

int main() {
    char expr[100]; fgets(expr,100,stdin);
    for(int i=0; expr[i]; i++){
        if(expr[i]=='('||expr[i]=='{'||expr[i]=='[') push(expr[i]);
        else if(expr[i]==')'||expr[i]=='}'||expr[i]==']'){
            if(!isMatch(pop(), expr[i])){
                printf("Not Balanced\n"); return 0;
            }
        }
    }
    printf(top==-1?"Balanced\n":"Not Balanced\n");
    return 0;
}
