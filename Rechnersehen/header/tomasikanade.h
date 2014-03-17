#include <QtGUI/QImage>

class tomasikanade{
public:
	static QImage getInterestPoints(QImage src, int threshold, int window_size, bool showgraypic);

private:
	// Gets interest point at position "x,y" of image "img"
	static int tok(int x, int y, QImage &src, QImage &dst, int window_size);
	static int getSobelX(int x, int y, QImage &src);
	static int getSobelY(int x, int y, QImage &src);
};