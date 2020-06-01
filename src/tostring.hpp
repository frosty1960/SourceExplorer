#ifndef SOURCE_EXPLORER_TOSTRING_HPP
#define SOURCE_EXPLORER_TOSTRING_HPP

#include <lak/strconv.hpp>

namespace SourceExplorer
{
  template<typename FROM>
  inline std::string to_astring(FROM from)
  {
    return std::to_string(from);
  }

  template<typename FROM>
  inline std::wstring to_wstring(FROM from)
  {
    return std::to_wstring(from);
  }

  template<typename FROM>
  inline std::u8string to_u8string(FROM from)
  {
    return lak::to_u8string(std::to_string(from));
  }

  template<typename FROM>
  inline std::u16string to_u16string(FROM from)
  {
    return lak::to_u16string(std::to_string(from));
  }

  template<typename FROM>
  inline std::u32string to_u32string(FROM from)
  {
    return lak::to_u32string(std::to_string(from));
  }
}

#endif