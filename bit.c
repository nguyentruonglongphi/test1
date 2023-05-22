#include <stdio.h>
#include <stdint.h>

/* Using enums to declare personal items */
typedef enum{
    AO          = 1 << 0,     //0b00000001  // shift 1 bit to the left
    QUAN        = 1 << 1,     //0b00000010
    VAY         = 1 << 2,     //0b00000100
    DAM         = 1 << 3,     //0b00001000
    NHAN        = 1 << 4,     //0b00010000
    VONG_TAY    = 1 << 5,     //0b00100000
    GIAY        = 1 << 6,     //0b01000000
    TUI         = 1 << 7      //0b10000000
}DO_DUNG_CA_NHAN;

void Them_Vao_Gio_Hang(uint8_t *gio_hang, DO_DUNG_CA_NHAN ten_do_dung){
    *gio_hang |= ten_do_dung;
}
void Xoa_Khoi_Gio_Hang(uint8_t *gio_hang, DO_DUNG_CA_NHAN ten_do_dung){
    *gio_hang &= ~ten_do_dung;
}
void Kiem_Tra_Gio_Hang(uint8_t gio_hang, DO_DUNG_CA_NHAN ten_do_dung){
    printf("Kiem tra gio hang:\n");
    switch (ten_do_dung) {
        case AO:
            printf("%s\t", "AO");
            break;
        case QUAN:
            printf("%s\t", "QUAN");
            break;
        case VAY:
            printf("%s\t", "VAY");
            break;
        case DAM:
            printf("%s\t", "DAM");
            break;
        case NHAN:
            printf("%s\t", "NHAN");
            break;
        case VONG_TAY:
            printf("%s\t", "VONG TAY");
            break;
        case GIAY:
            printf("%s\t", "GIAY");
            break;
        case TUI:
            printf("%s\t", "TUI");
            break;
        default:
            break;
    }
    if (gio_hang & ten_do_dung) {
        printf("co trong gio hang\n");
    } else {
        printf("khong co trong gio hang\n");
    }
}
void Hien_Thi_Gio_Hang(uint8_t gio_hang){
    printf("Gio hang gom co:\n");
    printf("STT\t TEN\n");
    if (gio_hang & AO) {
        printf("1\t AO\n");
    }
    if (gio_hang & QUAN) {
        printf("2\t QUAN\n");
    }
    if (gio_hang & VAY) {
        printf("3\t VAY\n");
    }
    if (gio_hang & DAM) {
        printf("4\t DAM\n");
    }
    if (gio_hang & NHAN) {
        printf("5\t NHAN\n");
    }
    if (gio_hang & VONG_TAY) {
        printf("6\t VONG TAY\n");
    }
    if (gio_hang & GIAY) {
        printf("7\t GIAY\n");
    }
    if (gio_hang & TUI) {
        printf("8\t TUI\n");
    }
}
int main(int argc, char const *argv[])
{   
    uint8_t GIO_HANG;

    /* Add to cart */ 
    Them_Vao_Gio_Hang(&GIO_HANG, (DO_DUNG_CA_NHAN)(NHAN | AO ));
    Them_Vao_Gio_Hang(&GIO_HANG, (DO_DUNG_CA_NHAN)(GIAY | AO ));

    /* Display cart */ 
    Hien_Thi_Gio_Hang(GIO_HANG);

    /* Remove from cart */ 
    Xoa_Khoi_Gio_Hang(&GIO_HANG, (DO_DUNG_CA_NHAN)(NHAN | GIAY));

    /* Check the item in the cart */ 
    Kiem_Tra_Gio_Hang(GIO_HANG, 8);

    /* Display cart after removing */ 
    Hien_Thi_Gio_Hang(GIO_HANG);
    return 0;
}