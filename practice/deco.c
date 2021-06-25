int __cdecl main(int argc, const char **argv, const char **envp)
{
  int v3; // ebx
  unsigned __int8 *v4; // rax
  std::__cxx11::string buffer; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int8 *result; // [rsp+48h] [rbp-38h]

  _main(argc, argv, envp);
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string(&buffer);
  std::operator<<<std::char_traits<char>>(refptr__ZSt4cout, "welcome to actf 2021\nplease input:");
  std::operator>><char,std::char_traits<char>,std::allocator<char>>(refptr__ZSt3cin);
  v3 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::length(&buffer);
  v4 = (unsigned __int8 *)std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::data(&buffer);
  result = Base64::b8encode(v4, v3);
  if ( !strcmp((const char *)enc_flag, (const char *)result) )
    std::operator<<<std::char_traits<char>>(refptr__ZSt4cout, "succ!");
  else
    std::operator<<<std::char_traits<char>>(refptr__ZSt4cout, "error!");
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::~basic_string(&buffer);
  return 0;
}

unsigned __int8 *__fastcall Base64::b8encode(unsigned __int8 *target, int targetLength)
{
  int v2; // eax
  unsigned __int8 *v3; // rax
  unsigned __int8 *v4; // rax
  int temp; // [rsp+24h] [rbp-1Ch]
  unsigned __int8 *result; // [rsp+28h] [rbp-18h]
  int end; // [rsp+34h] [rbp-Ch]
  int n; // [rsp+38h] [rbp-8h]
  int i; // [rsp+3Ch] [rbp-4h]

  result = (unsigned __int8 *)operator new[](8 * (targetLength / 3 + 2) + 1);
  for ( i = 0; i < targetLength; i += 3 )
  {
    temp = (target[i + 1] << 8) | (target[i] << 16) | target[i + 2];
    for ( n = 0; n <= 7; ++n )
      result[8 * (i / 3) + n] = Base64::b8table[(temp >> (-3 * n + 21)) & 7];
  }
  end = targetLength / 3;
  v2 = targetLength % 3;
  if ( targetLength % 3 == 1 )
  {
    v3 = &result[8 * end + 5];
    *v3 = Base64::b8table[8];
    result[8 * end + 4] = *v3;
  }
  else if ( v2 != 2 )
  {
    if ( v2 )
      return result;
    goto LABEL_13;
  }
  v4 = &result[8 * end + 7];
  *v4 = Base64::b8table[8];
  result[8 * end++ + 6] = *v4;
LABEL_13:
  result[8 * end] = 0;
  return result;
}