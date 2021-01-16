#include<stdio.h>

    int areaofrec(int lenght, int breadth) {

        int area;
        area = lenght * breadth;
        return area;
    }

int main() {
    int l=5,b=10;

    int area = areaofrec( l , b );
    printf("%d" ,area);
}