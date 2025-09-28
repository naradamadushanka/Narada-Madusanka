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

#include <stdio.h>
int main(){
  int n=5;
  int x[n];
  int y[n];
  for(int i=0;i<5;i++){
    
    for(int j=0;j<(i+1);j++){
      
      if((j==i)||(j==0)){
        y[j]=1;
      }
      else{
        y[j]=x[j-1]+x[j];
        for(int k=0;k<j-1;k++){
        
          
        }
        
      }
    }
    for(int j=0;j<(5-i);j++){
      printf(" ");
    }
    for(int j=0;j<(i+1);j++){
      x[j]=y[j];
      printf("%i ",y[j]);
    
    }
    printf("\n");
  }
}
#include <stdio.h>
int main(){
    int n = 5; 

    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            
            for (int j = 0; j < n; j++) {
                printf("*");
            }
        } else {
            for (int j = 0; j < i + 1; j++) {
                if (j == 0 || j == i) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}
#include <stdio.h>
int main(){
  int n=4;
  int x=0 ,y=0,z=0;
  while(x<4){
    x+=1;
    z=y;
    for(int j=0;j<4-x;j++){
      printf(" ");
    }
    for(int j=z+1;j<z+x+1;j++){
     y=y+1;
     printf("%i ",y);
     
      
    }
    printf("\n");
  }
}
#include <stdio.h>
int main(){
  int n=5;
  for(int i=1;i<n+1;i++){
    for(int k=0;k<(n-i);k++){
      printf(" ");
    }
    for(int j=0;j<(2*i-1);j++){
      if((j==0)||(j==(2*i-2))){
        printf("*");
      }
      else{
        printf(" ");
      }
    }
    printf("\n");
  }
  for(int i=n-1;i>0;i--){
        for(int k=0;k<(n-i);k++){
      printf(" ");
    }
    for(int j=0;j<(2*i-1);j++){
      if((j==0)||(j==(2*i-2))){
        printf("*");
      }
      else{
        printf(" ");
      }
    }
    printf("\n");
  }
}
#include <stdio.h>
int main(){
  int n=5;

  for(int i=n;i>0;i--){
    for(int r=0;r<2;r++){
      if((r==1)&&(i==n)){
        for(int k=0;k<(n-i);k++){
          for(int c=0;c<r+1;c++){
            printf(" ");
         }
        }
    for(int j=0;j<(2*i-1);j++){
      if((j==(2*i-2))){
        printf("*");
      }
      else{
        printf(" ");
      }
    }
      }
      else{
        for(int k=0;k<(n-i);k++){
          for(int c=0;c<r+1;c++){
            printf(" ");
         }
        }
    for(int j=0;j<(2*i-1);j++){
      if((j==0)||(j==(2*i-2))){
        printf("*");
      }
      else{
        printf(" ");
      }
    }
    }
    }
    printf("\n");
  }
}
#include <stdio.h>
#include <math.h>  

int main() {
    int start = 1;   
    int end = 100;   
    for (int num = start; num <= end; num++) {
        int x=1; 

        if (num <= 1) {
            x=0;
        } else {
            for (int i = 2; i <= sqrt(num); i++) {
                if (num % i == 0) {
                    x=0; 
                    break;
                }
            }
        }

        if (x) {
            printf("%d ",num);
        }
    }

    printf("\n");
}
#include <stdio.h>
int main(){
  int n=6;
  int cou=0;
  while(n!=1){
    cou+=1;
    if(n%2==0){
      n=n/2;
      
    }
    else{
      n=3*n+1;
    }
  }
  printf("%i",cou);
}
#include <stdio.h>
int main(){
  int n=153;
  int x=1;
  int y=1;
  int p=1;
  int q=1;
  int sum=0;
  while(1){
    y=10*x;
    p=n/x;
    q=n/y;
    sum=sum+((((p*x)-(q*y))/x)*(((p*x)-(q*y))/x)*(((p*x)-(q*y))/x));
    x=x*10;
    
    if(q==0){
      break;
    }
  }
  if(sum==n){
    printf("%i is an Armstrong number.",n);
  }
  else{
     printf("%i is not an Armstrong number.",n);
  }
}
#include <stdio.h>
int main(){
  int n=121;
  int x=1;
  int y=1;
  int p=1;
  int q=1;
  int cou=0;
    while(1){
    cou+=1;
    y=10*x;
    q=n/y;
    x=x*10;
    if(q==0){
      break;
    }
  }
  int num[cou];
  cou=0;
  y=1;
  x=1;
  while(1){
    y=10*x;
    p=n/x;
    q=n/y;
    num[cou]=((p*x)-(q*y))/x;
    x=x*10;
    cou+=1;
    if(q==0){
      break;
    }
  }
  int sum=0;
  x=1;
  for(int i=cou-1;i>-1;i--){
    sum=sum+(num[i]*x);
    x=x*10;
  }
  if(sum==n){
   printf("%i is a palindrome",sum);
  }
  else{
    printf("%i is not a palindrome",sum);
  }
}
