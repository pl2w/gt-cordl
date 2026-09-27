#pragma once
// IWYU pragma private; include "GorillaTag/GTColor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/zzzz__GTColor_def.hpp"
#include "GorillaTag/zzzz__GTColor_HSVRanges_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GorillaTag::GTColor.RandomHSV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::GlobalNamespace::GTColor_HSVRanges)>(&::GorillaTag::GTColor::RandomHSV)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d22f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTColor*>(),
                        {"RandomHSV", {}, {::i2c::type_of<::GlobalNamespace::GTColor_HSVRanges>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Color GorillaTag::GTColor::RandomHSV(::GlobalNamespace::GTColor_HSVRanges  ranges)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTColor*>(),
                        {"RandomHSV", {}, {::i2c::type_of<::GlobalNamespace::GTColor_HSVRanges>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, ranges);
}
// Ctor Parameters []
constexpr ::GorillaTag::GTColor::GTColor()   {
}
