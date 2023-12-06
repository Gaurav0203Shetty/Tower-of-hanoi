#include<stdio.h>
#include<curses.h>

int TOH(int n, char source, char destination, char helper){
if(n==0){
    return 0;
}  
TOH(n-1,source, helper,destination);
printf("\n Move disc %d from tower %c to tower %c",n, source, destination); TOH(n-1, helper, destination,source);
}
int main() {
TOH(4, 'A','B','C'); 
}