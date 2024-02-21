#include <stdio.h>

void leftTriangle(int height);
void downLeftTriangle(int height);
void rightTriangle(int height);
void downRightTriangle(int height);
void pyramid(int height);
void downPyramid(int height);
void diamond(int height);
void square(int height);
void hollowSquare(int height);
void rhombus(int height);
void oneTriOnAnother(int height);

int main(){
    int lenght = 5;
    leftTriangle(lenght);
    printf("\n");
    downLeftTriangle(lenght);
    printf("\n");
    rightTriangle(lenght);
    printf("\n");
    downRightTriangle(lenght);
    printf("\n");
    pyramid(lenght);
    printf("\n");
    downPyramid(lenght);
    printf("\n");
    diamond(lenght);
    printf("\n");
    square(lenght);
    printf("\n");
    hollowSquare(lenght);
    printf("\n");
    rhombus(lenght);
    printf("\n");
    oneTriOnAnother(lenght);
    return 0;
}

// Function for left triangle
void leftTriangle(int height){
    for(int i=0; i<height; i++){
        for(int j=0; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}

// Function for upside down left triangle
void downLeftTriangle(int height){
    for(int i = height-1; i>=0; i--){
        for(int j=0; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}

// Function for right triangle
void rightTriangle(int height){
    for(int i=1;i<=height;i++){
        for(int j=0;j<height-i;j++){
            printf(" ");
        }
        for(int k=0;k<i;k++){
            printf("*");
        }
        printf("\n");
    }
}

// Function for upside down right triangle
void downRightTriangle(int height){
    for(int i=0; i<height;i++){
        for(int j=0; j<i;j++){
            printf(" ");
        }
        for(int k=0; k<height-i;k++){
            printf("*");
        }
        printf("\n");
    }
}

// Function for pyramid
void pyramid(int height){
    for(int i=0; i<height;i++){
        for(int j=0; j<height-i;j++){
            printf(" ");
        }
        for(int k=0; k<=i; k++){
            printf("* ");
        }
        printf("\n");
    }
}

// Function for upside down pyramid
void downPyramid(int height){
    for(int i=0; i<height;i++){
        for(int j=0; j<i;j++){
            printf(" ");
        }
        for(int k=0; k<height-i;k++){
            printf("* ");
        }
        printf("\n");
    }
}

// Function for diamond
void diamond(int height){
    for(int i=0; i<height; i++){
        for(int j=0; j<height-i; j++){
            printf(" ");
        }
        for(int k=0; k<2*i-1; k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=height-2; i>=0; i--){
        for(int j=0; j<height-i; j++){
            printf(" ");
        }
        for(int k=0; k<2*i-1; k++){
            printf("*");
        }
        printf("\n");
    }
}

// Function for square
void square(int length){
    for(int i=0; i<length; i++){
        for(int j=0; j<length; j++){
            printf("* ");
        }
        printf("\n");
    }
}

// Function for hollow square
void hollowSquare(int length){
    for(int i=0; i<length; i++){
        for(int j=0; j<length; j++){
            if(i==0 || i==length-1 || j==0 || j==length-1){
                printf("*");
            }
            else{
                printf(" ");
            }
            printf(" ");
        }
        printf("\n");
    }
}

// Function for rhombus
void rhombus(int length){
    for(int i=0; i<length; i++){
        for(int j=0; j<length-i; j++){
            printf(" ");
        }
        for(int k=0; k<length; k++){
            printf("* ");
        }
        printf("\n");
    }
}

// Function for one triangle on another
void oneTriOnAnother(int height){
    for(int i=0; i<height; i++){
        for(int j=0; j<i; j++){
            printf(" ");
        }
        for(int k=0; k<height-i; k++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1; i<height; i++){
        for(int j=0; j<height-i-1; j++){
            printf(" ");
        }
        for(int k=1; k<=i+1;k++){
            printf("* ");
        }
        printf("\n");
    }
}