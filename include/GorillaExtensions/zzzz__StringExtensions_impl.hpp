#pragma once
// IWYU pragma private; include "GorillaExtensions/StringExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaExtensions/zzzz__StringExtensions_def.hpp"
//  Writing Method size for method: ::GorillaExtensions::StringExtensions.UnicodeStrikethrough
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GorillaExtensions::StringExtensions::UnicodeStrikethrough)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5cf74fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::StringExtensions*>(),
                        {"UnicodeStrikethrough", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GorillaExtensions::StringExtensions::UnicodeStrikethrough(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::StringExtensions*>(),
                        {"UnicodeStrikethrough", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, str);
}
// Ctor Parameters []
constexpr ::GorillaExtensions::StringExtensions::StringExtensions()   {
}
