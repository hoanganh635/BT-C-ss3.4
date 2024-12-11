#include <stdio.h>


int main() {
    float toan,van,anh,tong,tb;
    sprintf("moi ban nhap vao diem mon toan %f ",toan);
    scanf("%f",&toan);
    sprintf("moi ban nhap vao diem mon van %f ",van);
    scanf("%f",&van);
    sprintf("moi ban nhap vao diem mon anh %f ",anh);
    scanf("%f",&anh);
    tong = toan + van + anh;
    tb = tong/3;
    sprintf("tong diem 3 mon la %.2f ",tong);
    sprintf("diem tb mon la %.2f ",tb);
    return 0;
}
