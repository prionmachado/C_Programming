#include<stdio.h>

float circlearea(float radius);
float squarearea(float side);
float rectanglearea(float a,float b);
float trianglearea(float b,float h);

int main(){
    float x,y;
    printf("Enter x:");
    scanf("%f",&x);
    printf("Enter y:");
    scanf("%f",&y);
    printf("Area of rectangle is:%f\n",rectanglearea(x,y));

    float radius;
    printf("Enter radius:");
    scanf("%f",&radius);
    printf("Area of circle is %f\n",circlearea(radius));

    float side;
    printf("Enter side:");
    scanf("%f",&side);
    printf("Area of square is %f\n",squarearea(side));

    float b,h;
    printf("Enter b:");
    scanf("%f",&b);
    printf("Enter h:");
    scanf("%f",&h);
    printf("Area of triangle is %f\n",trianglearea(b,h));

   return 0;
}

float squarearea(float side){
    return side*side;
}
float circlearea(float radius){
    return 3.14*radius*radius;
}
float rectanglearea(float x,float y){
    return x*y;
}  
float trianglearea(float b,float h){
    return 0.5*b*h;
}
