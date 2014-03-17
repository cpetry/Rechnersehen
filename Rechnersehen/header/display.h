#include <algorithm>    // std::min
#include <QtGui/QRgb>
#include <QtGUI/QImage>

class display{
public:
	// draw little red cross
	static void drawcross(int x, int y, QImage &pic){
		pic.setPixel(x, y, qRgb(255, 0, 0));
		pic.setPixel(std::max(x - 1, 0), y, qRgb(255, 0, 0));				//left
		pic.setPixel(std::min(x + 1, pic.width() - 1), y, qRgb(255, 0, 0));	//right
		pic.setPixel(x, std::min(y + 1, pic.height() - 1), qRgb(255, 0, 0));	//top
		pic.setPixel(x, std::max(y - 1, 0), qRgb(255, 0, 0));				//bottom
	}

	static void drawgraypic(int x, int y, int value, int valuedivide, QImage &pic){
		value /= valuedivide; // experimentally defined
		//value += 128;
		pic.setPixel(x, y, qRgb(value, value, value));
	}
};