#include "moravec.h"
#include <algorithm>    // std::min
#include <QtGui/QRgb>

QImage moravec::getInterestPoints(QImage src, int threshold, int window_size){
	QImage result = src.copy();

	// window size has to be greater or equal than 1!
	if (window_size < 1)
		return result;

	int value = 0;
	for (int y = 0; y < src.height(); y++)
	for (int x = 0; x < src.width(); x++){
		value = mor(x, y, src, window_size);
		if (value > threshold){

			// draw little red cross
			result.setPixel(x, y, qRgb(255, 0, 0));
			result.setPixel(std::max(x - 1, 0), y, qRgb(255, 0, 0));				//left
			result.setPixel(std::min(x + 1, src.width() - 1), y, qRgb(255, 0, 0));	//right
			result.setPixel(x, std::min(y + 1, src.height() - 1), qRgb(255, 0, 0));	//top
			result.setPixel(x, std::max(y - 1, 0), qRgb(255, 0, 0));				//bottom
		}
	}
	return result;
}

int moravec::mor(int x, int y, QImage &img, int k){

	int s_x = 0;
	int s_y = 0;
	int s_d1 = 0;
	int s_d2 = 0;

	for (int i = -k; i < k; i++)
	for (int j = -k; j < k; j++){
		int min_value = 0;
		if (x + i >= 0
			&& y + j >= 0
			&& x + i < img.width()
			&& y + j < img.height())
			min_value = qGray(img.pixel(x + i, y + j));
		else
			continue;

		if (x + i + 1 < img.width())
			s_x += qGray(img.pixel(x + i + 1, y + j)) - min_value;

		if (y + j + 1 < img.height())
			s_y += qGray(img.pixel(x + i, y + j + 1)) - min_value;

		if (x + i + 1 < img.width()
			&& y + j + 1 < img.height())
			s_d1 += qGray(img.pixel(x + i + 1, y + j + 1)) - min_value;
		
		if (y + j - 1 >= 0
			&& x + i + 1 < img.width())
			s_d2 += qGray(img.pixel(x + i + 1, y + j - 1)) - min_value;
	}


	return std::min(std::min(std::abs(s_d1), std::abs(s_d2)), std::min(std::abs(s_x), std::abs(s_y)));
}