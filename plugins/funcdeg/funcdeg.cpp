#ifdef FUNCDEG_EXPORTS
#define FUNCDEG_API __declspec(dllexport)
#else
#define FUNCDEG_API __declspec(dllimport)
#endif // FUNCDEG_EXPORTS

extern "C" FUNCDEG_API double deg(double left, double right);
double deg(double left, double right)
{
	if (right > 0)
	{
		double temp = left;
		for (int i = 1; i < int(right); i++)
			temp *= left;
		return temp;
	}
	else if (right == 0)
		return 1;
	else
	{
		double temp_1 = left;
		temp_1 = 1 / left;
		double temp_2 = left;
		temp_2 = 1 / left;
		for (int i = 1; i < int(-right); i++)
			temp_1 *= temp_2;
		return temp_1;
	}
}