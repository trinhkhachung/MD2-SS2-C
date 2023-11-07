#include <stdio.h>
int main(){
	float canh = 4, chieuDai = 5, chieuRong = 4, banKinh = 5.2;
	const float PI = 3.14;
	float chu_vi_vuong = canh * 4, dien_tich_vuong = canh*canh;
	float chu_vi_hcn = (chieuDai + chieuRong) * 2, dien_tich_hcn = chieuDai * chieuRong;
	float chu_vi_tron= 4*PI*banKinh, dien_tich_tron = PI*banKinh*banKinh;
	printf ("Chu vi va dien tich hinh vuong lan luot la %.0f %.0f\n",chu_vi_vuong,dien_tich_vuong);
	printf ("Chu vi va dien tich hinh hcn lan luot la %.0f %.0f\n",chu_vi_hcn,dien_tich_hcn);
	printf ("Chu vi va dien tich hinh tron lan luot la %.2f %.2f\n",chu_vi_tron,dien_tich_tron);
	return 0;
}
