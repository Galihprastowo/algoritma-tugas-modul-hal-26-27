#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
main(void)
{
int bilangan;

cout<<"masukan bilangan:";

cin>>bilangan;

(bilangan%2==0) ? cout<<"Yang anda masukkan adalah bilangan genap" : cout<<"Yang anda masukkan adalah bilangan ganjil";

getch();

return 0;
}

