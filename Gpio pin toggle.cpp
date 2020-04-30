#include<iostream>
#include<fstream>
#include<unistd.h>
#include<string>
using namespace std;
int main()
{
fstream file;
file.open( "/sys/class/gpio/gpio68/direction");
file<<"out" ;
file.close();
for(int i=0;i<10;i++){
file.open( "/sys/class/gpio/gpio68/value");
file<<"1" ;
printf("%d :ON \n",i);
file.close();
usleep(10000);
file.open( "/sys/class/gpio/gpio68/value");
file<<"0" ;
printf("%d :OFF \n",i);
file.close();
usleep(10000);
}
file.open( "/sys/class/gpio/gpio68/value");
file<<"0" ;
file.close();
 return 0;
}
