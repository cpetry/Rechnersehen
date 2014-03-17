#include <QtGUI/QImage>

class moravec{
public:
	static QImage getInterestPoints(QImage src, int threshold, int window_size);

private:
	// Gets interest point at position "x,y" of image "img"
	static int mor(int x, int y, QImage &img, int window_size);
};