#include <stdio.h>

int main() {
    int n = 5;
    //scanf("%d", &n);   // read input into n

    char x[n];         // variable-length array (needs C99 or later)

    for (int i = 1; i < n+1; i++) {
        if((i==1)||(i==n)){
           for (int j = 0; j < n; j++){
             x[j]='*';
           }
        }
        else{
          
          x[0]='*';
          x[n-1]='*';
          for (int k = 1; k < n-1; k++){
            x[k]=' ';
          }
        }
      printf("%s\n",x);
    }

   
}