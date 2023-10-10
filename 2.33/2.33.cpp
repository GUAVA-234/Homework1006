#include <stdio.h>

int main() {
	double total_mileage, fuel_price_per_unit, mileage_per_unit, parking_fee, toll_fee;
	// 讀取輸入資訊
	printf("請輸入一整天的總里程數（公里）：");
	scanf("%lf", &total_mileage);
	printf("請輸入汽油一公升/加侖的價格：");
	scanf("%lf", &fuel_price_per_unit);
	printf("請輸入平均一公升/加侖能行駛的公里數：");
	scanf("%lf", &mileage_per_unit);
	printf("請輸入一天的停車費用：");
	scanf("%lf", &parking_fee);
	printf("請輸入一天的通行費用（過路費）：");
	scanf("%lf", &toll_fee);
	double required_fuel = total_mileage / mileage_per_unit;
	double fuel_cost = required_fuel * fuel_price_per_unit;
	double total_cost = fuel_cost + parking_fee + toll_fee;
	printf("一天下來開車去工作的花費是：%lf元\n", total_cost);
	return 0;
}