#ifdef FUNCSIN_EXPORTS
#define FUNCSIN_API __declspec(dllexport)
#else
#define FUNCSIN_API __declspec(dllimport)
#endif // FUNCSIN_EXPORTS

#define PI 3.14

extern "C" FUNCSIN_API double func(double a);

double func(double a)
{
	a = a * PI / 180;
	float _sin = a;
	for (int i = 1; i < 4; i++)
	{
		int factorial = 1;
		for (int j = 1; j < 2 * i + 2; j++)
			factorial *= j;
		float a_pow = a;
		for (int j = 0; j < 2 * i; j++)
			a_pow *= a;
		int b = -1;
		for (int j = 0; j < i - 1; j++)
			b *= (-1);
		_sin += (a_pow * b / factorial);
	}
	return _sin;
}