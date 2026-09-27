#pragma once
// IWYU pragma private; include "TMPro/TMP_Compatibility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__TMP_Compatibility_def.hpp"
#include "TMPro/zzzz__TMP_Compatibility_AnchorPositions_def.hpp"
#include "TMPro/zzzz__TextAlignmentOptions_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_Compatibility.ConvertTextAlignmentEnumValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::TextAlignmentOptions (*)(::TMPro::TextAlignmentOptions)>(&::TMPro::TMP_Compatibility::ConvertTextAlignmentEnumValues)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb352e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_Compatibility*>(),
                        {"ConvertTextAlignmentEnumValues", {}, {::i2c::type_of<::TMPro::TextAlignmentOptions>()}}
                    )));
    return ___internal_method;
  }
};
inline ::TMPro::TextAlignmentOptions TMPro::TMP_Compatibility::ConvertTextAlignmentEnumValues(::TMPro::TextAlignmentOptions  oldValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TMPro::TMP_Compatibility*>(),
                        {"ConvertTextAlignmentEnumValues", {}, {::i2c::type_of<::TMPro::TextAlignmentOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TextAlignmentOptions>(nullptr, ___internal_method, oldValue);
}
// Ctor Parameters []
constexpr ::TMPro::TMP_Compatibility::TMP_Compatibility()   {
}
