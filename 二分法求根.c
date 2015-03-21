#include<stdio.h>
#include<math.h>
float a3,a2,a1,a0;

float f(float x){
  return a3*x*x*x+a2*x*x+a1*x+a0;
}

int main(){

  float a,b,t;
  scanf("%f %f %f %f",&a3,&a2,&a1,&a0);
  scanf("%f %f",&a,&b);
  while(b-a>0.001){
    t=(a+b)/2;
    if(f(t)==0){
      printf("%.2f",t);
      break;
    }
    else if(f(t)*f(a)>0){
      a=t;
    }
    else {
      b=t;
    }
  }
  printf("%.2f",t);
  return 0;
}
