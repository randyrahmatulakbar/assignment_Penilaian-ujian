#include <stdio.h>
#include <string.h>

int main() {

    int kkm;
    float uts, uas;
    char nama[70];

    printf("----sistem penilaian Ujian Siswa SMKN 21 Jakarta---- \n\n");

    printf("masukan nama anda : ");
    fgets(nama, sizeof(nama), stdin);

    printf("masukan nilai UTS : ");
    scanf("%f", &uts);
    printf("masukan nilai UAS : ");
    scanf("%f", &uas);
    printf("masukan nilai KKM : ");
    scanf("%d", &kkm);


    float nilai_akhir = 0;
    nilai_akhir += uts * 0.4;
    nilai_akhir += uas * 0.6;


    printf("\n--Hasil-- \n");
    printf("Nama        : %s\n", nama);
    printf("Nilai KKM   : %d\n", kkm);
    printf("Nilai UTS   : %.2f\n", uts);
    printf("Nilai UAS   : %.2f\n", uas);
    printf("Nilai Akhir : %.2f\n", nilai_akhir);


    if (nilai_akhir >= 60 && uts > 40 && uas > 40)
    {
        printf("anda LULUS!!");
    } else if (nilai_akhir < 60 || uts < 40 || uas < 40)
    {
        printf("anda GAGAL!");
    }

    return 0;

}