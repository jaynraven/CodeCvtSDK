#ifndef __CODESVTSDK_HPP__
#define __CODESVTSDK_HPP__

#include <string>
#include <codecvt>

std::wstring StrToUtf16(const std::string& str)
{
	if (str.empty())
	{
		return std::wstring();
	}
    try
	{
		std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>, wchar_t> conv;
		return conv.from_bytes(str);
    }
    catch (const std::exception&)
	{
		std::wstring_convert<std::codecvt_utf16<wchar_t>, wchar_t> conv;
		return conv.from_bytes(str);
    }
}

std::string WstrToUtf8(const std::wstring& wstr)
{
	if (wstr.empty())
	{
		return std::string();
	}
    try
	{
        std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> conv;
        return conv.to_bytes(wstr);
    }
    catch (const std::exception&)
	{
        std::wstring_convert<std::codecvt_utf8<wchar_t>> conv;
		return conv.to_bytes(wstr);
    }
}

#endif // __CODESVTSDK_HPP__