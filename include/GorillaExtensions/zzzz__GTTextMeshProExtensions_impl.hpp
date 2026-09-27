#pragma once
// IWYU pragma private; include "GorillaExtensions/GTTextMeshProExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaExtensions/zzzz__GTTextMeshProExtensions_def.hpp"
#include "Cysharp/Text/zzzz__Utf16ValueStringBuilder_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GorillaExtensions::GTTextMeshProExtensions.SetTextToZString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::TMPro::TMP_Text*, ::Cysharp::Text::Utf16ValueStringBuilder)>(&::GorillaExtensions::GTTextMeshProExtensions::SetTextToZString)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5cf7424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTTextMeshProExtensions*>(),
                        {"SetTextToZString", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::Cysharp::Text::Utf16ValueStringBuilder>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaExtensions::GTTextMeshProExtensions::SetTextToZString(::TMPro::TMP_Text*  textMono, ::Cysharp::Text::Utf16ValueStringBuilder  zStringBuilder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTTextMeshProExtensions*>(),
                        {"SetTextToZString", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::Cysharp::Text::Utf16ValueStringBuilder>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, textMono, zStringBuilder);
}
// Ctor Parameters []
constexpr ::GorillaExtensions::GTTextMeshProExtensions::GTTextMeshProExtensions()   {
}
