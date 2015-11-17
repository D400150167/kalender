#include <stdio.h>
#include <time.h>

void tampilkan_kalender() {
time_t DETIK;
struct tm *info;
char buffer[80];
char HARI[10];
char BULAN[10];
char tanggal[3];
time( &DETIK );

info = localtime( &DETIK );

strftime(buffer,80," %Y - %H:%M:%S", info);
strftime(tanggal,3,"%d",info);
strftime(HARI,10,"%A", info);
if ( strcmp(HARI,"Thursday") == 0 ) {
        strftime(HARI,10,"Kamis", info);
    } else if ( strcmp(HARI,"Friday") == 0 ) {
        strftime(HARI,10,"Jum'at", info);
    }else if ( strcmp(HARI,"Saturday") == 0 ) {
        strftime(HARI,10,"Sabtu", info);
    }else if ( strcmp(HARI,"Sunday") == 0 ) {
        strftime(HARI,10,"Minggu", info);
    } else if ( strcmp(HARI,"Monday") == 0 ) {
        strftime(HARI,10,"Senin", info);
    } else if ( strcmp(HARI,"Tuesday") == 0 ) {
        strftime(HARI,10,"Selasa", info);
    } else if ( strcmp(HARI,"Wednesday") == 0 ) {
        strftime(HARI,10,"Rabu", info);
    }
strftime(BULAN,10,"%B",info);
if(strcmp(BULAN,"January") ==0) {
    strftime(BULAN,10,"Januari",info);
}else if(strcmp(BULAN,"February") ==0) {
    strftime(BULAN,10,"Februari",info);
}else if(strcmp(BULAN,"March") ==0) {
    strftime(BULAN,10,"Maret",info);
}else if(strcmp(BULAN,"April") ==0) {
    strftime(BULAN,10,"April",info);
}else if(strcmp(BULAN,"May") ==0) {
    strftime(BULAN,10,"Mei",info);
}else if(strcmp(BULAN,"June") ==0) {
    strftime(BULAN,10,"Juni",info);
}else if(strcmp(BULAN,"July") ==0) {
    strftime(BULAN,10,"Juli",info);
}else if(strcmp(BULAN,"August") ==0) {
    strftime(BULAN,10,"Agustus",info);
}else if(strcmp(BULAN,"September") ==0) {
    strftime(BULAN,10,"September",info);
}else if(strcmp(BULAN,"October") ==0) {
    strftime(BULAN,10,"Oktober",info);
}else if(strcmp(BULAN,"November") ==0) {
    strftime(BULAN,10,"November",info);
}else if(strcmp(BULAN,"December") ==0) {
    strftime(BULAN,10,"Desember",info);
}

printf("Sekarang adalah hari & tanggal:|%s, %s %s %s|\n",HARI,tanggal, BULAN, buffer);

}
int main ()
{
time_t AWAL=0, AKHIR=0;
time( &AWAL );
while (1) {
time( &AKHIR );
if ( AKHIR - AWAL > 0 ) {
//tampilkan tanggal
tampilkan_kalender();
AWAL = AKHIR;
}
}
return(0);
}