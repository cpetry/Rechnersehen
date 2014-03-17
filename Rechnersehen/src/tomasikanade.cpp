#include "tomasikanade.h"
#include "display.h"

QImage tomasikanade::getInterestPoints(QImage src, int threshold, int window_size, bool showgraypic){
	// first case: same grayvalue
	// lambda_1 = lambda_2 = 0

	// second case: perfect edge in y-direction
	// lambda_1 > 0 , lambda_2 = 0

	// third case: bright corner
	// lambda_1 > lambda_2 > 0

	// Corners are where lambda_2 > threshold

	QImage dst = src.copy();

	// window size has to be greater or equal than 1!
	if (window_size < 1)
		return dst;

	int value = 0;
	for (int y = 0; y < src.height(); y++)
	for (int x = 0; x < src.width(); x++){
		value = tok(x, y, src, dst, window_size);
		if (!showgraypic && value > threshold){
			display::drawcross(x, y, dst);
		}
		else if (showgraypic){
			display::drawgraypic(x, y, value, 5, dst);
		}
	}
	return dst;
}

// Gets interest point at position "x,y" of image "img"
int tomasikanade::tok(int x, int y, QImage &src, QImage &dst, int window_size){
	int k = window_size;
	int value = 0;

	/*
	for (int i = -k; i < k; i++)
	for (int j = -k; j < k; j++){
		// Sobel (Faltung)
		
		int sobelvalue = getSobelY(x + i, y + j, src);
		
		sobelvalue * sobelvalue;// ^2
		value += sobelvalue;
	}*/

	int sobelx = getSobelX(x, y, src);

	int sobely = getSobelY(x, y, src);

	return std::sqrt(sobelx * sobelx + sobely * sobely);
}

// 1 0 -1
// 2 0 -2
// 1 0 -1
int tomasikanade::getSobelX(int x, int y, QImage &src){
	int xm_ym = (x - 1 >= 0 && y + 1 < src.height())          ? qGray(src.pixel(x - 1, y + 1)) : 0;
	int xm_y =  (x - 1 >= 0)                                  ? qGray(src.pixel(x - 1, y)) * 2 : 0;
	int xm_yp = (x - 1 >= 0 && y - 1 >= 0)                    ? qGray(src.pixel(x - 1, y - 1)) : 0;
	int xp_ym = (y + 1 < src.height() && x + 1 < src.width()) ? - qGray(src.pixel(x + 1, y + 1)) : 0;
	int xp_y  = (x + 1 < src.width())                         ? - qGray(src.pixel(x + 1, y)) * 2 : 0;
	int xp_yp = (x + 1 < src.width() && y - 1 >= 0)           ? - qGray(src.pixel(x + 1, y - 1)) : 0;
	return  xm_ym + xm_y + xm_yp + xp_ym + xp_y + xp_yp;
}

// 1 2 1
// 0 0 0
// -1 -2 -1
int tomasikanade::getSobelY(int x, int y, QImage &src){
	int xm_yp = (x - 1 >= 0 && y + 1 < src.height())          ? qGray(src.pixel(x - 1, y + 1)) : 0;
	int x_yp  = (y + 1 < src.height())                        ? qGray(src.pixel(x, y + 1)) * 2 : 0;
	int xp_yp = (x + 1 < src.width() && y + 1 < src.height()) ? qGray(src.pixel(x + 1, y + 1)) : 0;
	int xm_ym = (x - 1 >= 0 && y - 1 >= 0)                    ? - qGray(src.pixel(x - 1, y - 1)) : 0;
	int x_ym  = (y - 1 >= 0)                                  ? - qGray(src.pixel(x, y - 1)) * 2 : 0;
	int xp_ym = (x + 1 < src.width() && y - 1 >= 0)	          ? - qGray(src.pixel(x + 1, y - 1)) : 0;
	return  xm_yp + x_yp + xp_yp + xm_ym + x_ym + xp_ym;
}