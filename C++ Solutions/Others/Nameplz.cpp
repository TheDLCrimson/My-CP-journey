#include<bits/stdc++.h>
using namespace std;


main()
{
    char Ho[30], Ten[30];
    printf("Nhap Ho : ");
    gets(Ho);
    strcat(Ho," ");
    printf("Nhap Ten : ");
    gets(Ten);
    strcat(Ho,Ten); /* Ghep Ten vao Ho*/
    printf("Ho ten la: ");
    puts(Ho);
    
    return 0;
}
