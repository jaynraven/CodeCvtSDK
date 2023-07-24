#include "code_cvt_sdk.hpp"

int CallBack(int progress, const char* msg)
{
	return 0;
}

int main()
{
	std::string str = "hello world";
	std::wstring wstr = StrToUtf16(str);

	return 0;
}
