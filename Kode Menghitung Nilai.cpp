#include <stdio.h>
#include <iostream>
using namespace std;

int main()

{

int nilai;

cout<<“Input Nilai\t:”;

cin>>nilai;

if(nilai >= 80 && nilai <=100)

{

cout<<“Grade nilai\t: Sangat Baik”;

}

else if(nilai >= 70 && nilai <=79)

{

cout<<“Grade nilai\t: Baik”;

}

else if(nilai >= 60 && nilai <=69)

{
cout<<“Grade nilai\t: Cukup”;

}

else if(nilai >= 50 && nilai <=59)

{

cout<<“Grade nilai\t: Kurang”;

}

else

{

cout<<“Grade nilai\t: Gagal”;

}

return 0;

}
