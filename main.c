#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main(){
    int q,w,e,r=1,t,y;
    do{
        system("cls");
        puts("=====================================");
        puts("Selamat Datang di Bioskop Pemrograman");
        puts("=====================================");
        puts("Menu :");
        puts("=====================================");
        puts("1. Lihat Kursi");
        puts("2. Pesan Kursi");
        puts("3. Hapus Kursi");
        puts("4. Exit");
        printf("Pilihan : ");scanf("%d",&q);
        switch(q){
            case 1:
                puts("=====================================");
                puts("=============Lihat Kursi=============");
                puts("=====================================");
                for(w=1;w<=5;w++){
                    for(e=1;e<=5;e++){
                        if(r<10 && r!=t){
                            printf("     %d",r);
                        }else if(r==t && t!=y){
                            if(r<10){
                                printf("     -");
                            }else{
                                printf("    -");
                            }
                        }else if(r==t && t==y){
                            if(r<10){
                                printf("     %d",r);
                            }else{
                                printf("    %d",r);
                            }
                        }else{
                            printf("    %d",r);
                        }r++;
                    }puts("\n");
                }r=1;
                puts("Kursi yang ditandai '-' sudah dipesan");
                puts("=====================================");
                printf("Press any key to continue ..");
                getch();
                break;
            case 2:
                puts("=====================================");
                puts("=============Pesan Kursi=============");
                puts("=====================================");
                for(w=1;w<=5;w++){
                    for(e=1;e<=5;e++){
                        if(r<10 && r!=t){
                            printf("     %d",r);
                        }else if(r==t && t!=y){
                            if(r<10){
                                printf("     -");
                            }else{
                                printf("    -");
                            }
                        }else if(r==t && t==y){
                            if(r<10){
                                printf("     %d",r);
                            }else{
                                printf("    %d",r);
                            }
                        }else{
                            printf("    %d",r);
                        }r++;
                    }puts("\n");
                }r=1;
                puts("Kursi yang ditandai '-' sudah dipesan");
                printf("Mau pesan kursi nomor berapa? ");scanf("%d",&t);
                if(t==y){
                    y=0;
                }
                system("cls");
                puts("=====================================");
                for(w=1;w<=5;w++){
                    for(e=1;e<=5;e++){
                        if(r<10 && r!=t){
                            printf("     %d",r);
                        }else if(r==t && t!=y){
                            if(r<10){
                                printf("     -");
                            }else{
                                printf("    -");
                            }
                        }else if(r==t && t==y){
                            if(r<10){
                                printf("     %d",r);
                            }else{
                                printf("    %d",r);
                            }
                        }else{
                            printf("    %d",r);
                        }r++;
                    }puts("\n");
                }r=1;
                puts("Kursi Berhasil Dipesan!");
                puts("=====================================");
                printf("Press any key to continue ..");
                getch();
                break;
            case 3:
                puts("=====================================");
                puts("=============Hapus Kursi=============");
                puts("=====================================");
                for(w=1;w<=5;w++){
                    for(e=1;e<=5;e++){
                        if(r<10 && r!=t){
                            printf("     %d",r);
                        }else if(r==t && t!=y){
                            if(r<10){
                                printf("     -");
                            }else{
                                printf("    -");
                            }
                        }else if(r==t && t==y){
                            if(r<10){
                                printf("     %d",r);
                            }else{
                                printf("    %d",r);
                            }
                        }else{
                            printf("    %d",r);
                        }r++;
                    }puts("\n");
                }r=1;
                puts("Kursi yang ditandai '-' sudah dipesan");
                printf("Mau hapus kursi nomor berapa? ");scanf("%d",&y);
                system("cls");
                puts("=====================================");
                for(w=1;w<=5;w++){
                    for(e=1;e<=5;e++){
                        if(r<10 && r!=t){
                            printf("     %d",r);
                        }else if(r==t && t!=y){
                            if(r<10){
                                printf("     -");
                            }else{
                                printf("    -");
                            }
                        }else if(r==t && t==y){
                            if(r<10){
                                printf("     %d",r);
                            }else{
                                printf("    %d",r);
                            }
                        }else{
                            printf("    %d",r);
                        }r++;
                    }puts("\n");
                }r=1;
                puts("Kursi Berhasil Dihapus!");
                puts("=====================================");
                printf("Press any key to continue ..");
                getch();
                break;
            case 4:
                exit(0);


        }
    }while(q!=4);
}
